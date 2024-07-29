//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>>&arr) {
        // code here
        int r=arr.size();
        int c=arr[0].size();
        
        int maxCount=0;
        int rowIdx=-1;
        
        
        for(int i=0; i<r; i++){
              int count=0;
            for(int j=0; j<c; j++){
                // check column to find that row which has max mumber of 1s and then the idx of that row i.e ith idx 
                if(arr[i][j])
                 count++;
                
                if(count>maxCount){
                    maxCount=count;
                    rowIdx=i;
                }
            }
        }
        return rowIdx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends