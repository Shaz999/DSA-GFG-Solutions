//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
      map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
         
            int ans =0;
            if(str.size()==1) return m[str[0]];
            for(int i=0;i<str.size();i++){
                
                if(m[str[i+1]]<=m[str[i]]) {
                    ans = ans+m[str[i]];
                }
                else{
                    ans=ans-m[str[i]];
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends