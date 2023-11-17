class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        int sum=0,max_1=0;
        while(i<=(n/2)-1){
            sum=nums[i]+nums[n-i-1];
            max_1=max(sum,max_1);
            i++;
        }
        return max_1;
    }
};
