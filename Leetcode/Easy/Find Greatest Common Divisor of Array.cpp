class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int n=nums.size();
        for (int i=0;i<n;i++){
            smallest = min(smallest, nums[i]);
            largest = max(largest, nums[i]);
        }
        int ans=1;
        for (int i=1;i<=smallest;i++){
            if(smallest%i==0 && largest%i==0){
                ans=i;
            }
        }
        return ans;
    }
};
