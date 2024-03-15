class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Left_product = 1;
        int Right_product = 1;
        vector<int>ans(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            ans[i]*=Left_product;
            Left_product*=nums[i];
            
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=Right_product;
            Right_product*=nums[i];
        }
        return ans;
    }
};
