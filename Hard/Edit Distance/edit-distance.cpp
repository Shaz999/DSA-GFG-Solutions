//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

  class Solution {
    int dp[102][102];
    int fun(string s, string t, int pos1, int pos2) {
        // If first string is empty, the only option is to
        // insert all characters of second string into first
        if (pos1 == 0) return pos2;
        // If second string is empty, the only option is to
        // remove all characters of first string
        if (pos2 == 0) return pos1;
        int &ans = dp[pos1][pos2];
        // If already calculated.
        if (ans != -1) return ans;
        // If last characters of two strings are same, nothing
        // much to do. Ignore last characters and get count for
        // remaining strings.
        if (s[pos1 - 1] == t[pos2 - 1])
            return ans = fun(s, t, pos1 - 1, pos2 - 1);
        // If last characters are not same, consider all three
        // operations on last character of first string, recursively
        // compute minimum cost for all three operations and take
        // minimum of three values.
        return ans = min({1 + fun(s, t, pos1, pos2 - 1),
                          1 + fun(s, t, pos1 - 1, pos2),
                          1 + fun(s, t, pos1 - 1, pos2 - 1)});
    }

  public:
    int editDistance(string s, string t) {
        memset(dp, -1, sizeof(dp));
        int ans = fun(s, t, s.size(), t.size());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends