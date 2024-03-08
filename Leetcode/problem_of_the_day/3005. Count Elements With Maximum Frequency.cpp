class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0;
        int maxf =0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxf=max(maxf,mp[nums[i]]);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            
        }
        if(mp.second>mp.second){
            count++;
        }
        return count;
    }
};
