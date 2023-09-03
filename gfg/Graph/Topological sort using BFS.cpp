class Solution
{
    
    
//  ------------------------------- TOPOSORT USING DFS TECHNIQUE--------------------------

    // private:
    // void dfs(int node, vector<int> adj[] , vector<int> &vis , stack<int> &st){
        
    //     vis[node]=1;
        
    //     for(auto it: adj[node]){
    //         if(!vis[it]){
    //             dfs(it,adj,vis,st);
    //         }
    //     }
    //     st.push(node);
        
        
    // }
	public:
	//Function to return list containing vertices in Topological order. 
	
	
	
	//-----------------------topological sort using BFS(KAHNS ALGORITHMS)-------------------------------
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int indegree[V]={0};
	    
	    for(int i=0;i<V;i++){
	        for(auto it : adj[i]){
	                indegree[it]++;
	        }
	    }
	    
	    queue<int>q;
	        for(int i=0;i<V;i++){
	            if(indegree[i]==0){
	                q.push(i);
	            }
	        }
	        
	        
	    vector<int>topo;
	    while(!q.empty()){

	           int node=q.front();
	           q.pop();
	           topo.push_back(node);
	    
	    for(auto it: adj[node]){
	        indegree[it]--;
	        if(indegree[it]==0){
	            q.push(it);
	        }
	    }
	    }
	  
	    
	    return topo;
	    
	    
	    
	    
	    
	    
//  ------------------------------- TOPOSORT USING DFS TECHNIQUE--------------------------
// 	    vector<int>vis(V,0);
// 	    stack<int>st;
// 	    vector<int>ans;
	    
	    
// 	    for(int i=0;i<V;i++){
// 	        if(!vis[i]){
// 	            dfs(i,adj,vis,st);
// 	        }
// 	    }
	    
// 	    while(!st.empty()){
// 	        ans.push_back(st.top());
// 	        st.pop();
// 	    }
	    
// 	    return ans;
	    
}
};
