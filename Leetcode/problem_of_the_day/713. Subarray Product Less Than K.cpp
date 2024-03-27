class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0){
            return 0;
        }
            int len = nums.size();
            int product =1;
            int count = 0;

            for(int i=0;i<len;i++){
                for(int j=i;j<len;j++){
                    
                    if(product*nums[j]<k){
                        count++;
                        product*=nums[j];
                    }
                    else if(product*nums[j]>=k){
                        product = 1;
                        break;
                    }
                   
                }
                product = 1; 
            }
        return count;
    }
};
