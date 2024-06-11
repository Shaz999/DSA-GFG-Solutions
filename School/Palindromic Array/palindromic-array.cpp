//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	 for(int i = 0;i < n;i++){
    	    if(!palindrome(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
    bool palindrome(int i){
        int rev = 0;
        int num = i;
        while(num!=0){
            int temp = num % 10;
            rev = temp + rev * 10;
            num /= 10;
        }
        return i == rev;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends