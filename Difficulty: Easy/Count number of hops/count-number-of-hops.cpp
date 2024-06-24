//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        long long count =0;
        if(n==0||n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        
        long long a =1;
        long long b =1;
        long long c= 2;
        long long d = 0;
        
        for(int i=3;i<=n;i++){
            d=(a+b+c)%1000000007;
            a=b;
            b=c;
            c=d;
            
        }
        return c;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends