//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int f(int n,int *arr,vector<int>& dp){
        if(n==0) return arr[0];
        if(n<0) return 0 ;
 
        if(dp[n]!=-1) return dp[n];
 
        //pick
        int pick = f(n-2,arr,dp) + arr[n];
 
        //not pick
        int notPick = f(n-1,arr,dp);
 
        return dp[n] = max(pick,notPick);
    }
    
// calculate the maximum sum with out adjacent
int findMaxSum(int *arr, int n) {
        vector<int>dp(n,-1);
 
        return f(n-1,arr,dp);
}
};
