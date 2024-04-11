//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
  
        vector<int> max_of_subarrays(int arr[], int N, int K) {
    vector<int> result;
    deque<int> max_queue;

    for (int i = 0; i < N; ++i) {
        // Remove elements from the front of the queue that are out of the current window
        while (!max_queue.empty() && max_queue.front() < i - K + 1) {
            max_queue.pop_front();
        }

        // Remove elements from the end of the queue that are smaller than the current element
        while (!max_queue.empty() && arr[max_queue.back()] < arr[i]) {
            max_queue.pop_back();
        }

        // Add the current element's index to the end of the queue
        max_queue.push_back(i);

        // Once the window size reaches K, start appending maximum elements to the result
        if (i >= K - 1) {
            result.push_back(arr[max_queue.front()]);
        }
    }

    return result;

    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends