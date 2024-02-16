class Solution {
    static bool cmp(pair<int,int>&a, pair<int,int>&b)
    {
        return a.second<b.second;
    }

public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        int n = arr.size();
        unordered_map<int,int>mp;
        for(auto i : arr) mp[i]++;
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(), cmp);

        int count = v.size();
        for(auto i : v)
        {
            if(i.second-k<=0)
            {
                k = k-i.second;
                count--;
            }
        }

        return count;
        
    }
};
