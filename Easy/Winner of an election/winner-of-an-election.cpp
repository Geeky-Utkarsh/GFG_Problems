//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        // find the maximum occurring element in the vote vec using hashmap
        unordered_map<string,int>umap;
        
        // Hasing the element of arr into unordered map 
        int maxCnt=0;
        
        for(int i=0; i<n; i++){
            umap[arr[i]]++;
            maxCnt=max(maxCnt, umap[arr[i]]);
            
        }
        
        // now finding the maximum occurring element in the  by using umap.second and save it 
        // int maxCnt=0;
        
        // for(const string &pair : umap){
        //     maxCnt=max(maxCnt,++umap[arr[i]]);
        // }
        
        vector<string>maxOcr;
        
        for(const auto &pair : umap){
            if(pair.second==maxCnt)
               maxOcr.push_back(pair.first);
        }
        
        // finding the lexicographically smallest element out of the max occurrnce elements in the vector of string
        if(!maxOcr.empty()){
          string minE=*min_element(maxOcr.begin(), maxOcr.end());
          return {minE,to_string(maxCnt)};
        }
        return {};
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends