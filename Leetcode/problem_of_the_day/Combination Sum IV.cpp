class Solution {
public:
    int solve(vector<int> &nums,int sum,int target,vector<int> &dp)
    {
        if(sum==target)
        return 1;
        if(dp[sum]!=-1)
        return dp[sum];
        int pick=0,not_pick=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<=target)
            pick+=solve(nums,sum+nums[i],target,dp);
        }
        return dp[sum]=pick;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target,-1);
        return solve(nums,0,target,dp);
    }
};
