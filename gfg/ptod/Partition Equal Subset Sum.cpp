// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0; 
        for(int i = 0; i < N; i++)
            sum += arr[i];
        if(sum % 2 != 0)
            return 0;
        
        int dp[sum/2 + 1]; memset(dp, 0, sizeof(dp));
        dp[0] = 1;
            
        for(int i = N - 1; i >= 0; i--){
            for(int target = sum/2; target >= 0; target--){
                if(target >= arr[i])
                    dp[target] |= dp[target - arr[i]];
            }
        }
        return dp[sum/2];
    }
};
