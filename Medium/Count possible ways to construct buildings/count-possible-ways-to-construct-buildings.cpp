//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    // DP question asked Payu on campus
	    const long long int mod=1e9+7;
	    vector<vector<long long>>dp(N+1,vector<long long>(2,1));
	    
	    for(int i=N-1; i>-1; i--){
	        dp[i][1]=dp[i+1][0];
	        
	        int make, nomake;
	        
	        make=dp[i+1][1];
	        nomake=dp[i+1][0];
	        
	        dp[i][0]=(make+nomake)%mod;
	    }
	    return (dp[0][0]*dp[0][0])%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends