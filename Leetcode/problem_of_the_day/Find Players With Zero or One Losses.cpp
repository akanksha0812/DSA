class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>w,l;
        unordered_map<int,int>total;

        for(auto it:matches){
            w.insert(it[0]);
            l.insert(it[1]);
            total[it[1]]++;
        }

        vector<int>a,b;
        vector<vector<int>>ans;
         for(auto it:w){
             if(total.find(it)==total.end()){
                 a.push_back(it);
             }
         }
          for(auto it:l){
             if(total[it]==1){
                 b.push_back(it);
             }
         }
         ans.push_back(a);
         ans.push_back(b);
         return ans;
    }
};
