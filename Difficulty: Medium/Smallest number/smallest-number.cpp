//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sum_of_digit(int n){
        int sum=0;
        
        while(n!=0){
            int tmp=n%10;
            sum+=tmp;
            
            n=n/10;
        }
        return sum;
    }
    
    string smallestNumber(int s, int d) {
        // code here
        // int r=999999;
        
        // int mn=INT_MAX; 
        
        // for(int i=0; i<=r; i++){
        //     string sn=to_string(i);
            
        //     if(sn.size()==d){
        //         int ss=sum_of_digit(stoi(sn));
        //         if(ss==s){
        //             mn=min(ss,mn);
        //         }
        //         //   return sn;
        //     }
        // }
          for(int i = pow(10,d-1); i<=pow(10,d)-1;i++){
            if(sum_of_digit(i) == s){
                return to_string(i);
            }
        }
        return to_string(-1);
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends