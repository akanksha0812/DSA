class Solution {
public:
   bool findRotation(vector<vector<int>>& m, vector<vector<int>>& t) {
        int n = m.size(),l=4;
        while(l--){
		
            if(m==t)
                return true;
            else{
			
                for(int i=0;i<n;i++){
                    for(int j=0;j<i;j++)
                        swap(m[i][j],m[j][i]);
                }
                for(int i=0;i<n;i++)
                    reverse(m[i].begin(),m[i].end());
            }
        }
        return false;
    }
};