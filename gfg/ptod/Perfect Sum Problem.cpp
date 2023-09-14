class Solution{

	public:
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n+1 , vector<int>(sum + 1 , 0));
        dp[0][0] = 1;
        int mod = 1e9 + 7;
        for(int i=1; i<=n; i++){
            for(int j=0; j<=sum ; j++){
                int ans = dp[i-1][j];
                if(j - arr[i-1] >= 0)
                ans += dp[i-1][j - arr[i-1]];
                dp[i][j] = ans % mod;
            }
        }
        return dp[n][sum];
	}
	  
};
