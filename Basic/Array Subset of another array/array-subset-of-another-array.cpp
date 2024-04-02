//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    // Create a hash set to store elements of a1
    unordered_set<int> hash_set(a1, a1 + n);
  unordered_map<int, int> count_a1;

    // Count occurrences of elements in a1
    for (int i = 0; i < n; ++i) {
        count_a1[a1[i]]++;
    }

    // Check if each element in a2 appears at least as many times in a1
    for (int i = 0; i < m; ++i) {
        // If a2[i] is not present in a1 or its count is zero, return "No"
        if (count_a1.find(a2[i]) == count_a1.end() || count_a1[a2[i]] == 0) {
            return "No";
        }
        // Decrement the count of a2[i] in a1
        count_a1[a2[i]]--;
    }

    // If all elements of a2 are present in a1 with enough occurrences, return "Yes"
    return "Yes";
}

