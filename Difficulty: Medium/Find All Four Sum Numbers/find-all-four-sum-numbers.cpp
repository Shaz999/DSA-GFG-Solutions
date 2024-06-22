//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
            vector<vector<int>> ans;
     set<vector<int>> found;  // Set to store unique quadruplets
     sort(arr.begin(), arr.end());
     int n = arr.size();
     
      for (int i = 0; i < n - 3; i++) {
       
        for (int start = i + 1; start < n - 2; start++) {

            int left = start + 1;
            int right = n - 1;
            while (left < right) {
                int sum = arr[i] + arr[start] + arr[left] + arr[right];
                if (sum == k) {
                    vector<int> quadruplet = {arr[i], arr[start], arr[left], arr[right]};
                    if (found.find(quadruplet) == found.end()) {
                        ans.push_back(quadruplet);
                        found.insert(quadruplet);
                    }
                    left++;
                    right--;
                   
                } else if (sum < k) {
                    left++;
                } else {
                    right--;
                }
            }
        }
      }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends