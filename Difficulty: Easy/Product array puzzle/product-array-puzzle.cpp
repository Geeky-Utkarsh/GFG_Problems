//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    // long long int fun(int i, vector<long long int>& nums) {
    //     long long int val = 1;
        
    //       for (int j = i + 1; j < nums.size(); j++) {
    //         val *= nums[j]; // Use multiplication for product
    //     }
        
    //       return val;
    //   }
        long long int fun(int i, vector<long long int>& nums) {
        long long int left_product = 1;
        long long int right_product = 1;
        
        // Calculate left product
        for (int j = 0; j < i; j++) {
            left_product *= nums[j];
        }
        
        // Calculate right product
        for (int j = i + 1; j < nums.size(); j++) {
            right_product *= nums[j];
        }
        
        // Return the product of left and right products
        return left_product * right_product;
    }
       
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        
        vector<long long int>res(nums.size());
        
        for(int i=0; i<nums.size(); i++){
            
            long long int i_plus=fun(i,nums);
            
            res[i]=(i_plus);
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends