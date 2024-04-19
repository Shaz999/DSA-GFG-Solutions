//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
 int search(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) // If key is found, return the index
            return mid;

        if (arr[low] <= arr[mid]) { // Left half is sorted
            if (key >= arr[low] && key < arr[mid])
                high = mid - 1; // Search in the left half
            else
                low = mid + 1; // Search in the right half
        } else { // Right half is sorted
            if (key > arr[mid] && key <= arr[high])
                low = mid + 1; // Search in the right half
            else
                high = mid - 1; // Search in the left half
        }
    }

    return -1; // Key not found

        //complete the function here
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends