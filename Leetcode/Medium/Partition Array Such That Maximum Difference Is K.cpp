class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 1;
        
        int a = nums[0];
        for(int i=0; i<n; i++)  {
            int curr = nums[i] - a;
            if(curr > k)    {
                cnt++;
                
                a = nums[i];
            }
        }
        
        return cnt;
    }
};