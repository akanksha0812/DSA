class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        unordered_map<string,int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<row;++i){
            string v;
            for(int j=0;j<col;++j){
                v.push_back(char(M[i][j]+'0'));
            }
            if(mp.find(v)==mp.end()){
                vector<int> str;
                for(int j=0;j<col;++j){
                    str.push_back(v[j]-'0');
                }
                ans.push_back(str);
                mp[v]++;
            }
        }
        return ans;
    }
};
