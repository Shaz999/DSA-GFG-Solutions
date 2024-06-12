//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
string solve(int arr[], int n) {
     int carry=0;
        string ans="";
        sort(arr,arr+n);
        for(int i=n-1;i>=0;i--){
            int num1=arr[i];
            i--;
            if(i<0){
                ans+=to_string(num1+carry);
                carry=0; break;
            }
            int num2=arr[i];
            int sum=num1+num2+carry;
            ans+= to_string(sum%10);
            carry=sum/10;
        }
        if(carry != 0)ans+=to_string(carry);
        int j=ans.size()-1;
        while(ans[j]=='0'){
            ans.pop_back();
            j--;
        }
        if(ans=="" && n !=0)ans="0";
        reverse(ans.begin(),ans.end());
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends