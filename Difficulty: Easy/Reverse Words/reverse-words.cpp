//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        reverse(str.begin(), str.end());
        
        string res="";
        
        stringstream ss(str);
        string tmp="";
        
        while(getline(ss,tmp,'.')){
            reverse(tmp.begin(), tmp.end());
            res=res+tmp+".";
        }
        
        res.pop_back(); // poping the inserted .
        
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends