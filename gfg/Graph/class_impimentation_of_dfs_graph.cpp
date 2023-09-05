#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void dfs(int node, vector<int> adj[],int vis[], vector<int> &ls){
        vis[node]=1;
        ls.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                dfs(it,adj,vis,ls);
            }
        }
      }
    public:
      vector<int> dfsofgraph(int n, vector<int> adj[]){
        int vis[n]={0};
        int start=0;
        vector<int> ls;
        dfs(start,adj,vis,ls);
        return ls;
      }

};

void addEdge(vector<int> adj[],int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printans(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter no of nodes"<<endl;
    cin>>n;
    vector<int> adj[n];
    int m;
    cout<<"Enter the no of edges"<<endl;
    cin>>m;
    int u,v;
    cout<<"Enter the edges(u,v)"<<endl;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        addEdge(adj,u,v);
    }
    // vector<int> adj[6];

    // addEdge(adj,0,2);
    // addEdge(adj,2,4);
    // addEdge(adj,0,1);
    // addEdge(adj,0,3);

    Solution obj;
    vector<int> ans=obj.dfsofgraph(n,adj);
    printans(ans);
    return 0;
}
