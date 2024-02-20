class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int ele;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int sumOfNatural = (n*(n+1))/2;
        ele = sumOfNatural-sum;
        
        return ele;
    }
};
