class Solution{
    public:
    int dp[1001][1001];
    int solve(int i, int n, int total, vector<int> &cost) {
        if (i >= n) {
            return 0;
        }
       
        if(total<0){
            return 0;
        }
        
        if(dp[i][total]!=-1){
            return dp[i][total];
        }
        
        int taken = 0;
        int nottaken = 0;
        if (total >= cost[i]){
             int val = cost[i] - floor(cost[i]*.9);
             taken = 1+solve(i + 1, n, total - val, cost);
        }
        nottaken = solve(i + 1, n, total, cost);
       
        return dp[i][total] =   max(nottaken,taken);
    }

    int max_courses(int n, int total, vector<int> &cost) {
        memset(dp,-1,sizeof(dp));
        return solve(0, n, total, cost);
    }
};
