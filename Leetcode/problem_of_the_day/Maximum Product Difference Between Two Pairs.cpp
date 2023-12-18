class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p1=nums[0]*nums[1];
        int p2=nums[nums.size()-1]*nums[nums.size()-2];
        
        int diff=p2-p1;
        return diff;
    }
};
