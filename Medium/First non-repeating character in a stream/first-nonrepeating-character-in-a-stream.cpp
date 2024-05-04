//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		       string res;
            int num=s.size();
            int j=0;
            int f=0;
            map<char,int>m;
            for(int i=0;i<num;i++){
                m[s[i]]++;
                if(m[s[i]]==1){
                    if(f==0){
                        res.push_back(s[i]);
                    }
                    else{
                        res.push_back(res[res.size()-1]);
                    }
                    f=1;
                }
                else{
                    if(res[res.size()-1]==s[i]){
                        j=0;
                        while(m[s[j]]!=1 && j<i){
                            j++;
                        }
                        if(j==i){
                            res.push_back('#');
                            f=0;
                        }
                        else{
                            res.push_back(s[j]);
                        }
                    }
                    else{
                        res.push_back(res[res.size()-1]);
                    }
                }
            }
            return res;
        
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends