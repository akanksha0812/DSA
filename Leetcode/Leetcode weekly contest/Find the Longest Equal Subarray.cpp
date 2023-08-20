class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int mxcount =0 ;
        int back = 0 ;
        int ans =0 ;
        for(int  r =0;  r<n ; r++){
            if(mp.find(nums[r]) == mp.end()){
                mp[nums[r]] = 0;
            }
            mp[nums[r]]++;
            
            mxcount = max(mxcount , mp[nums[r]]);
            
            if((r - back+1 - mxcount) > k){
                mp[nums[back]] -= 1;
                back++;
            }
            ans = max(ans , mxcount);
        }
        return ans;
    }
};
