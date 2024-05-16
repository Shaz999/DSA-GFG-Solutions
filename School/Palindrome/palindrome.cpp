//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
	     int rem = 0; 
        int rn = 0;
        int temp  = n;
        
        while(n!=0){
            rem = n % 10;
            rn = rn * 10 + rem;
            n = n / 10;
        }
        
        if(rn == temp){
            return "Yes";
        }
        return "No";
    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends