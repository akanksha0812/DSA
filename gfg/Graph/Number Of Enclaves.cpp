class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        queue<pair<int,int>> q;
        
        // checking boundary
        for(int j=0;j<m;j++){
            // 1st row
            if(!vis[0][j] && grid[0][j]==1){
                q.push({0,j});
                vis[0][j]=1;
            }
            
            // last row
            if(!vis[n-1][j] && grid[n-1][j]==1){
                q.push({n-1,j});
                vis[n-1][j]=1;
            }
        }
        
        for(int i=0;i<n;i++){
            // 1st col
            if(!vis[i][0] && grid[i][0]==1){
                q.push({i,0});
                vis[i][0]=1;
            }
            
            //last col
            if(!vis[i][m-1] && grid[i][m-1]==1){
                q.push({i,m-1});
                vis[i][m-1]=1;
            }
        }
        
        // For checeking all four directions
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        
        while(!q.empty()){
            int r= q.front().first;
            int c=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
                
            }
        }
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    count++;
                }
            }
        }
        return count;
    }
};
