//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        
        // Brute Froce solution  --> using N^2 approach 
        int zeroS, oneS, twoS;
        zeroS=0;
        oneS=0;
        twoS=0;
        
        int l=0, r=0;
        int ans=-1;
        
        for(; r<S.size(); r++){
            if(S[r]=='0')
              zeroS++;
            else if(S[r]=='1')
               oneS++;
            else 
               twoS++;
               
          while(zeroS>=1 && oneS>=1 && twoS>=1){
              if(ans==-1)
                  ans=r-l+1;
              else 
                 ans=min(ans,r-l+1);
              
              if(S[l]=='0'){
                  zeroS--;
              }
              if(S[l]=='1')
                 oneS--;
              if(S[l]=='2')
                 twoS--;
                 
            l++;
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends