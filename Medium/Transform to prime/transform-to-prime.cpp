//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    private:
      bool isPrime(int num){
          if(num<=1)
            return false;
          
          for(int i=2; i<=sqrt(num); i++){
              if(num%i==0)
                return false;
          }
          return true;
      }
       int nextPrime(int n){
           int next=n+1;
           
           while(true){
               if(isPrime(next)){
                   return next;
               }
               next++;
           }
       }
        
    public:
    int minNumber(int arr[],int N)
    {
    //   int n=sizeof(arr)/sizeof(arr[0]);
      int sum=accumulate(arr,arr+N,0);
      
      if(isPrime(sum))
        return 0;
      
      long long int nearestPrime=nextPrime(sum);
      
      return (nearestPrime-sum);
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends