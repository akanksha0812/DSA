class Solution {
public:
    int solve(vector<int>& ranges,int idx,int end, vector<int> &dp)
    {
        if(idx>=ranges.size())
        {
            if(end<ranges.size()-1)
            return 1e9;
            else
            return 0;
        }

        if(end>=ranges.size()-1)
        return 0;

        if(dp[end]!=-1)
        return dp[end];

        int notpick=solve(ranges,idx+1,end,dp);
        int pick=1e9;
        if(idx-ranges[idx]<=end)
        {
            pick=1+solve(ranges,idx+1,ranges[idx]+idx,dp);
        }

        return dp[end]=min(pick,notpick);
    }
    int minTaps(int n, vector<int>& ranges) {
        vector<int> dp(n+1,-1);
        int res=solve(ranges,0,0,dp);

        if(res>=1e9)
        return -1;

        return res;
    }
};
