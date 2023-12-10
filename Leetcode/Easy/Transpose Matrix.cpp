class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& v) {
        int m = v.size(), n = v[0].size();

        if(m == n){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < i ;j++){
                    int temp = v[i][j];
                    v[i][j] = v[j][i];
                    v[j][i] = temp;
                }
            }
            return v;
        }

        else{
           
            vector<vector<int>> ans (n, vector<int> (m,0));

            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < m ; j++){
                    ans[i][j] = v[j][i];
                }
            }

            return ans;
        }
    }
};
