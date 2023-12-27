class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
         vector<int> ans;
        
        int col=matrix[0].size();
        
        int row=matrix.size();
        
           

            for(int j=0;j<col;j++)
            {
                int k=j;
                
                for(int i=0;i<=j;i++)
                {
                     ans.push_back(matrix[i][k]);
                    
                    k--;
                 }
               
            }
            
            
            for(int i=1;i<row;i++)
            {
                int k=i;
                
                for(int j=(col-1);j>=i;j--)
                {
                    ans.push_back(matrix[k][j]);
                    
                    k++;
                }
            }
            
            return ans;
    }
};
