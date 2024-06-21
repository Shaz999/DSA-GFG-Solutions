//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
                vector<int> ans, v;

            unordered_map<int,int> m;

        

        for(int i=0; i<N; i++) m[Arr[i]] = i;

        ans.push_back(-1);

        v.push_back(Arr[N-1]);   

        for(int i=N-2; i>=0; --i){                               
            int lb = lower_bound(v.begin(), v.end(), Arr[i])-v.begin();      

          if(lb == 0){

             ans.push_back(-1);

             v.insert(v.begin(),Arr[i]);

          }else{

             ans.push_back(v[lb-1]);

             v.insert(v.begin()+lb,Arr[i] );

          }

        }      

        for(int i=0; i<N; i++){

            if(ans[i] != -1)

            ans[i] = m[ans[i]];

        } 

        reverse(ans.begin(), ans.end());

          for(int i=N-1; i>= 0; --i){

            if(ans[i] != -1){

            if(ans[ans[i]] > ans[i])

            ans[i] = ans[ans[i]];

            }

        }

        return ans;

    
    }
};

//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}
// } Driver Code Ends