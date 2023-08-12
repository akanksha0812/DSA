class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
  
        vector<int> prev(m+1,0);
        vector<int> curr(m+1,0);
        if(grid[n-1][m-1]==1) return 0;
        if(grid[0][0]==0) curr[1]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i!=1 || j!=1){
                    int path1=0,path2=0;
                    if(i>1) if(grid[i-2][j-1]==0) path1=prev[j];
                    if(j>1) if(grid[i-1][j-2]==0) path2=curr[j-1];
                    curr[j]= path1+path2;
                }
                prev=curr;

            }
        }
        return curr[m];
        
    }
};
