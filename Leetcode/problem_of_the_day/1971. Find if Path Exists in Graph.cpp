class Solution {
public:
    void dfs(int node ,vector<int> &vis,vector<int> adj[]){
        if(vis[node]){
            return ;
        }
        vis[node]=1;
        for(auto it : adj[node]){
            if(vis[it]==0){
                dfs(it,vis,adj);
            }
        }

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       
        bool flag = false ;
        vector<int> adj[n];//n of vertices so edges
        for(auto it: edges){
            int u = it[0] , v = it[1] ;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,0);
        dfs(source,vis,adj);
        return vis[destination];
    }
};
