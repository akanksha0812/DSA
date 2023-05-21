class Solution {
public:
    
    void dfs(vector<vector<int>>& grid,vector<vector<int>> &vis,int i,int j){

    if(i>=grid.size() or i<0 or j>=grid.size() or j<0 or vis[i][j] or grid[i][j]==0){
        return ;
    }
    vis[i][j]=1;
    grid[i][j]=-1;

    dfs(grid,vis,i+1,j);
    dfs(grid,vis,i,j+1);
    dfs(grid,vis,i-1,j);
    dfs(grid,vis,i,j-1);
    }

    int shortestBridge(vector<vector<int>>& grid) {
     int n=grid.size();
     vector<vector<int>> vis(n,vector<int>(n,0));
     int check=1;

     for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(grid[i][j]==1){
               dfs(grid,vis,i,j);
               check=0;
               break;
 }
       }
       if(check==0){
           break;
       }
 }
     vector<pair<int,int>> v1;
     vector<pair<int,int>> v2;

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==-1){
              v1.push_back({i,j});
            }
            else if(grid[i][j]==1){
                v2.push_back({i,j});
            }
        }

     }

     int ans=INT_MAX;

     for(int i=0;i<v1.size();i++){
         for(int j=0;j<v2.size();j++){
             ans=min(ans,abs(v1[i].first-v2[j].first)+abs(v1[i].second-v2[j].second)-1 );
         }
     }

return ans;
    }
};
