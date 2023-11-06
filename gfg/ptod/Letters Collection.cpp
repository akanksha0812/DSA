// User function Template for C++

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int> ans;
       
       
       for(int l=0;l<q;l++)
       {
           int hop=queries[l][0];
           int i=queries[l][1];
           int j=queries[l][2];
           
        //   cout<<i<<" "<<hop<<" "<<j<<"\n";
          int sum=0;
          if(i+hop<n) 
             for(int k=j-hop;k<=j+hop;k++) 
              if(k>=0 && k<m) {
                  
                  sum=sum+mat[i+hop][k];
                //   cout<<i+hop<<" "<<k<<" ";
                // cout<<mat[i+hop][k]<<" ";
              }
           
          if(i-hop>=0) for(int k=j-hop;k<=j+hop;k++) if(k>=0 && k<m){
              sum+=mat[i-hop][k];
            //   cout<<mat[i-hop][k]<<" ";
            //   cout<<i-hop<<" "<<k<<" ";
          } 
           
          if(j+hop<m) for(int k=i-hop+1;k<i+hop;k++) if(k>=0 && k<n) 
          { 
          sum+=mat[k][j+hop];
        //   cout<<mat[k][j+hop]<<" ";
        //   cout<<k<<" "<<j+hop<<" ";
          }
          if(j-hop>=0) for(int k=i-hop+1;k<i+hop;k++) if(k>=0 && k<n) 
          {
          sum+=mat[k][j-hop];
        //   cout<<mat[k][j-hop]<<" ";
        //   cout<<k<<" "<<j-hop<<" ";
          }
          
        //   cout<<"\n";
          ans.push_back(sum);
       }
       
       return ans;
    }
};
