#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    /*storing in matrix sc->O(n*n) & tc->O(n)/

    // int adj[n+1][n+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    
    //For weighted graph instead of assign equal to 1 we will assign the vlaue of weight
    //adj[u][v] = w;

    // }
    
    /*storing in adjacency list(vector) sc->O(2*Edges) & tc->O(n)*/

    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        //u -----> v
        adj[u].push_back(v);
        // adj[v].push_back(u); this will be not the case in directed graph so sc-> O(E)
    }
    
    return 0;
}
