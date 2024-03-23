class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int mod = 1000000007;
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(1);
        
        for(int i=1;i<n;i++){
            ans.push_back((ans[i]+ans[i-1])%mod);
        }
        return ans;
        
    }
};
