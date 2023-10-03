class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int l=nums.size(),count=0;
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
