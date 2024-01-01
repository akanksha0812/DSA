class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_set<int>st;
        int res(0);
        for(auto it:nums)
        {   
            int tgt = (k-(it%k))%k;
            if(st.find(tgt)!=st.end())
                st.erase(tgt);
            else st.insert(it%k);
        }
        return st.size()==0;
    }
};
