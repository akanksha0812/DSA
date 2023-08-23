class Solution {
private:
    bool dfs(int i, int j, vector<vector<char>> &grid, string &word, int k, int n, int m, int d1, int d2) {
        k++;
        if(k==word.size()) return true;
        int ni=i+d1, nj=j+d2;
        if(ni>=0 and ni<n and nj>=0 and nj<m and grid[ni][nj]==word[k]) return dfs(ni,nj,grid,word,k,n,m,d1,d2);
        return false;
    }
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    vector<vector<int>> res;
	    int n=grid.size(), m=grid[0].size(), o=word.size()-1;
        int dx[] = {-1,-1,1,1,0,0,-1,1};
        int dy[] = {-1,1,1,-1,-1,1,0,0};
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]==word[0]) {
                    for(int it=0; it<8; it++) {
                        if(dfs(i,j,grid,word,0,n,m,dx[it],dy[it])) {
                            res.push_back({i,j});
                            break;
                        }
                    }
                }
            }
        }
        return res;
	}
};
