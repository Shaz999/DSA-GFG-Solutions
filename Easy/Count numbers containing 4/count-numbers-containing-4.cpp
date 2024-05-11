//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int N) {
          int count=0;
        for(int i=1;i<=N;i++){
            int ans=i;
           while(ans>0)
           {
               int res=ans%10;
               if(res==4){
                   count++;
                  break;
               }
               ans/=10;
               
           }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends