//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    
    static bool customSort(pair<int,int>a , pair<int,int>b){
        if(a.second>b.second)
           return true;
        else if(a.second<b.second)
           return false;
        else 
           return a.first<b.first;
    }
    vector<int> sortByFreq(vector<int>& arr){
        
        // Your code here
        unordered_map<int,int>f;
        
        for(auto x :arr){
            f[x]++;
        }
        
        vector<pair<int,int>>vp;
        
        for(auto x : arr){
            vp.push_back({x,f[x]});
        }
        
        sort(vp.begin(), vp.end(), customSort);
        // this custom sort will sort the pair vector accordingly 
        
        vector<int>res;
        
        for(auto x : vp){
            res.push_back(x.first);
        }
        return res;
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends