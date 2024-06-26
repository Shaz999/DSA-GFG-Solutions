//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here    if (n <= 1) return 0;
    
    vector<int> leftMin(n), rightMax(n);
    leftMin[0] = arr[0];
    rightMax[n - 1] = arr[n - 1];
    
    // Fill leftMin array
    for (int i = 1; i < n; ++i) {
        leftMin[i] = min(leftMin[i - 1], arr[i]);
    }
    
    // Fill rightMax array
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }
    
    // Find maximum difference
    int maxDiff = 0;
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (leftMin[i] <= rightMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j++;
        } else {
            i++;
        }
    }
    
    return maxDiff;
}

    

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends