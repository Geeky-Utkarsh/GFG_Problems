//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        // merging 2 arrays 
        int i=0, j=0;
        
        vector<int>m;
        m.reserve(arr1.size()+arr2.size());
        
        
        m.insert(m.end(), arr1.begin(), arr1.end());
        m.insert(m.end(), arr2.begin(), arr2.end());
        
        // while(i<arr1.size() && j<arr2.size()){
        //     m.push_back(arr1[i]);
        //     m.push_back(arr2[j]);
            
        //     i++;
        //     j++;
        // }
        
        sort(m.begin(), m.end());
        // finding the 2 middle elements of the m vector 
        
        int m_size=m.size();
        int mid_idx=m_size/2;
        
        return m[mid_idx]+m[mid_idx-1];
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends