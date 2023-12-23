//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        vector<pair<int,int>>pairVec;
        
        for(int i=0; i<N; i++)
          pairVec.push_back({F[i],i+1});
         
        sort(pairVec.begin(), pairVec.end());
        
        int last=pairVec[0].first; // Fiinishing time of  first(last) meeting
        vector<int>ans;
        ans.push_back(pairVec[0].second);
        
        for(int i=1; i<N; i++){
            
            if(S[pairVec[i].second-1]>last){
              ans.push_back(pairVec[i].second);
              last=pairVec[i].first;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends