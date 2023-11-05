class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> mp;
        
        for(int it: nums){
            mp[it]++;
        }
        
        priority_queue<pair<int, int> >pq;
        for(auto x : mp){
            pq.push({x.second , x.first});
        }
        vector <int> ans;
        for(int i = 0 ; i < k ; i++){
        ans.push_back(pq.top().second);
        pq.pop();
    }
        return ans;
        
    }
};
