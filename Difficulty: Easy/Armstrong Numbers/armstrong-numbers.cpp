//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        string arm=to_string(n);
        
        int n1=arm[0]-'0';
        int n2=arm[1]-'0';
        int n3=arm[2]-'0';
        
        if((n1*n1*n1+n2*n2*n2+n3*n3*n3)==n)
         return "true";
         
        return "false";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends