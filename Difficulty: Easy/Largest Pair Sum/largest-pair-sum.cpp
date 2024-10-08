//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        
        // we have to find 1st and 2nd largest number as they will sum up to make largest pair sum 
        
        int s=arr.size();
        
        int first_l=INT_MIN;
        int Second_l=INT_MIN;
        
        for(int i=0; i<s; i++){
            first_l=max(first_l,arr[i]);
        }
        // now we have 1st largest
        
        // for 2nd largest now 
        for(int i=0; i<s; i++){
            
            if(arr[i]<first_l){
                
                Second_l=max(Second_l,arr[i]);
            }
        }
        
        return first_l+Second_l;
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends