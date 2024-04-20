class Solution {
public: 
    void solve(int i,int j,int &maxii,int &maxij,vector<vector<int>>& nums) 
    { 
        if(i>=nums.size() || j>=nums[0].size() || nums[i][j]==0) 
        { 
                  return;
        } 
        maxii=max(maxii,i); 
        maxij=max(maxij,j); 
        nums[i][j]=0; 
        solve(i+1,j,maxii,maxij,nums); 
        solve(i,j+1,maxii,maxij,nums); 
        
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& nums) {
         
         int maxii=-1; 
         int maxij=-1; 
         vector<vector<int> > ans; 
         
         for(int i=0;i<nums.size();i++) 
         {   
            for(int j=0;j<nums[0].size();j++) 
            {    
                if(nums[i][j]==1)  
                {  
                    cout<<i;
                  
                solve(i,j,maxii,maxij,nums); 
                ans.push_back({i,j,maxii,maxij}); 
                maxii=0; 
                maxij=0;
                } 
            }
         }
         return ans;
    }
};
