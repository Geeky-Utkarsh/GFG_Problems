//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int isPossible(vector<vector<int>>paths){
	    // Code here
	    
	    for(int i=0; i<paths.size(); i++){
	           int count=0;
	        for(int j=0; j<paths.size(); j++){
	            if(paths[i][j]==1){
	               count++;
	            }    
	        }
	         if(count%2!=0)  return false;
	    }
	    return true;
	}
Yes, 
exactly! In an undirected graph represented by an adjacency matrix, each row corresponds to a vertex, 
and the number of entries (connections) in each row represents 
the degree of that vertex. For the graph to have an Eulerian circuit, every vertex must have an even degree.


So, in short, if each row (or layer) in the adjacency matrix contains an even number of connections (non-zero entries), 
then the graph has the potential to be an Eulerian circuit. This condition ensures that every vertex has an even degree, 
which is a necessary condition for the existence of an Eulerian circuit. 
              If any vertex has an odd degree, the graph cannot have an Eulerian circuit.

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>paths(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cin >> paths[i][j];
		}
		Solution obj;
		int ans = obj.isPossible(paths);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
