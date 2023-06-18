class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i+1])<diff){
                diff=abs(nums[i]-nums[i+1]);
            }
        }
        return diff;
    }
};
