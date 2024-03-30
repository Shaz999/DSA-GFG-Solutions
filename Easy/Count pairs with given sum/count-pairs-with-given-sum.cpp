//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
          unordered_map<int, int> freq;
        int count = 0;

        // Count the frequency of each element in the array
        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        // Count pairs whose sum is equal to K
        for(int i = 0; i < n; i++) {
            count += freq[k - arr[i]];

            // Exclude the case where the element itself is considered twice for the pair
            if (k - arr[i] == arr[i])
                count--;
        }

        // Since each pair is counted twice, divide the count by 2 to get the actual number of pairs
        return count / 2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends