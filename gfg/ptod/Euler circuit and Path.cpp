class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	if (V == NULL){
            return {};
        }
        
        int circuit = 0;
        int path = 0;
        
        for (int i=0; i<V; i++){
            if (adj[i].size()%2 == 0){
                circuit++;
            }
            else{
                path++;
            }
        }
        
        if (circuit == V){
            return 2;
        }
        else if(path == 2){
             return 1;
        }
        else{
            return 0;
        }
    }
};
