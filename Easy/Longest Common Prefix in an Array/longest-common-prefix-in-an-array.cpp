//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
       if (N == 0) return "-1";

        // Find the length of the shortest string in the array
        int minLen = INT_MAX;
        for (int i = 0; i < N; ++i) {
            minLen = min(minLen, (int)arr[i].size());
        }

        // Iterate through characters up to the length of the shortest string
        for (int i = 0; i < minLen; ++i) {
            // Check if all characters at the current index are the same
            for (int j = 1; j < N; ++j) {
                if (arr[j][i] != arr[0][i]) {
                    return (i > 0) ? arr[0].substr(0, i) : "-1"; // Return the prefix found so far
                }
            }
        }

        // If all strings have been checked and no mismatch occurred, return the whole prefix
        return arr[0].substr(0, minLen);
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends