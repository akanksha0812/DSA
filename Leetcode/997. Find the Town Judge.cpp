class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,vector<int>> m;
        unordered_map<int,bool> mp;
        if(trust.size()==0 && n==1)
        return 1;
        for(auto it:trust)
        {
            m[it[1]].push_back(it[0]);
            mp[it[0]]=1;
        }

        for(auto it:m)
        {
            if(it.second.size()==n-1 && mp[it.first]==0)
            return it.first;
        }

        return -1;

    }
};
