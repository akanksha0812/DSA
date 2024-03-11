
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int ans=0;
	    unordered_set<int> st;
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            st.insert(mat1[i][j]);
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(st.find(x-mat2[i][j])!=st.end()){
	                ans++;
	            }   
	        }
	        
	    }
	    
	    return ans;
	}
};
