#User function Template for python3

class Solution:
    
    #Function to check whether there is a subarray present with 0-sum or not.
    def subArrayExists(self,arr,n):
        ##Your code here
        #Return true or false
        unordered_map={};
        curr_sum=0
        
        for i in range(len(arr)):
            curr_sum+=arr[i]
            
            if curr_sum==0 or curr_sum in unordered_map:
                return True;
                
            #store the current sum and its index in the dictionary
            unordered_map[curr_sum]=i
            
        return False;
#{ 
 # Driver Code Starts
#Initial Template for Python 3



def main():
    T=int(input())
    while(T>0):
        
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        if(Solution().subArrayExists(arr,n)):
            print("Yes")
        else:
            print("No")
        
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends