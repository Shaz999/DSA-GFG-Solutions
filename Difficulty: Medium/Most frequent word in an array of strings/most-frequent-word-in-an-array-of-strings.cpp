//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
          
               unordered_map<string,int>mg;
               for(int i=0;i<n;i++){
               mg[arr[i]]++;
               }
               string ans;
               int it =0;
               
               for(int i =0;i<n;i++){
                   if(mg[arr[i]]>=it){
                       it = mg[arr[i]];
                       mg[arr[i]]=0;
                       ans=arr[i];
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
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends