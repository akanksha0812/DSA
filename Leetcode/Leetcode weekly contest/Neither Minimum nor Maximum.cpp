class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        
            sort(nums.begin(),nums.end());
            if(n==1 || n==2){
                return -1;
            }
            return nums[1];
        
        
    }
};
