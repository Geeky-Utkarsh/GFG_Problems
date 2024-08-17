//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        
          if(n<2)
            return false;
          
        
        // Initialize prefix and suffix sum arrays
        vector<long long> prefix(n);
        vector<long long> suffix(n);
        
        // Calculate prefix sums
        prefix[0] = arr[0];
        
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + arr[i];
        }
        
        // Calculate suffix sums
        suffix[n - 1] = arr[n - 1];
        
        for (int i=n-2; i>=0; --i) {
            suffix[i]=suffix[i+1] + arr[i];
        }
        
        // Check if there is a split point
        for (int i=0; i<n-1; ++i) {
            if (prefix[i]==suffix[i+1])
                return true;
            
        }
        
        return false;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends