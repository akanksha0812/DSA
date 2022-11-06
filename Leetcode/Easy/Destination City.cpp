class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> m;

      for(int i =0; i< paths.size(); i++)
      {
          m[paths[i][0]]++;
          m[paths[i][1]]++;
      }

      for( int i =0; i< paths.size(); i++)
        {
            if(m[paths[i][1]]==1)return paths[i][1];
        }
        
        return paths[0][1];   
    }
};