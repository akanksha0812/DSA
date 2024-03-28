class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // int count=0;
        // map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second>=k){
        //         count++;
        //     }
        // }
        // return count*k;

        int ans=0;
        int n=nums.size();
        int j=0;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[j]]--;
                j++;
            }
            
            ans=max(ans,i-j+1);
        }

        return ans;
    }
};
