class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        map<string,vector<string>>v;
        int n=N;
        for(int i=0;i<n;++i){
            string now;
            for(int j=0;j<Dictionary[i].size();++j){
                if(Dictionary[i][j]>='A' and Dictionary[i][j]<='Z'){
                    now+=Dictionary[i][j];
                    v[now].push_back(Dictionary[i]);
                }
            }
           
        }
        vector<string>ans;
        for(int i=0;i<v[Pattern].size();++i){
            ans.push_back(v[Pattern][i]);
        }
        
        if(ans.size())
            return ans;
        return {"-1"};
    }
};
