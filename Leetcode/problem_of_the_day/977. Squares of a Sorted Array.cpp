class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     nums[i]*=nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        int n = nums.size();
        int left=0,right=n-1;
        vector<int>ans(n);

        for(int index=n-1;index>=0;index--){

            if(abs(nums[left])>nums[right]){
                ans[index]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[index]=nums[right]*nums[right];
                right--;
            }
        }

        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
        return nums;

    }
};
