//User function Template for C++

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        vector<int>ans;
        set<vector<int>>s;
        for(int i=0;i<M;i++){
            vector<int>v;
            for(int j=0;j<N;j++){
                v.push_back(matrix[i][j]);
            }
            if(s.find(v)!=s.end()){
                ans.push_back(i);
            }
            else s.insert(v);
        }
        return ans;
      
    } 
};
