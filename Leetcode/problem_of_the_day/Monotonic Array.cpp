class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int Inc=true,Dec=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                Dec=false;
            }
            if(nums[i]>nums[i+1]){
                Inc=false;
            }
        }
        return Inc || Dec;
    }
};
