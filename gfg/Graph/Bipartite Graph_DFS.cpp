class Solution {
    
private:
    bool checkdfs(int start,int init, vector<int> adj[], vector<int> &color){
        color[start]=init;
        
        for(auto it: adj[start]){
            if(color[it]==-1){
                if(checkdfs(it, !init, adj, color)==false){
                    return false;
                }
            }
            else if(color[it]==init){
                return false;
            }
        }
        
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	    
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(checkdfs(i,0,adj,color)==false){
	                return false;
	            }
	        }
	    }
	    
	    return true;
	}

};
