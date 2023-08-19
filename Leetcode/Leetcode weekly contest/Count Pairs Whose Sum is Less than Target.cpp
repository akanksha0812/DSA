class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;
        queue<pair<int,int>>ans;
        for (int i=0;i<n;i++){
            for(int j=n-1;j>0;j--){
                if(nums[i]+nums[j]<target && i>=0 && j>i && n>j){
                    ans.front().first=nums[i];
                    ans.front().second=nums[j];
                    count++;
                }
            }
        }
        return count;
    }
};
