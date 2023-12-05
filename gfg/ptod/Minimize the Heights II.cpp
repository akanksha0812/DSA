// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        
        int ans=arr[n-1]-arr[0];
        
        int smallest=arr[0]+k;
        int largest=arr[n-1]-k;
        
        int minN,maxN;
    
        for(int i=0;i<n-1;i++){
            minN=min(smallest, arr[i+1]-k);
            
            maxN=max(largest, arr[i]+k);
            
            if(minN<0){
                continue;
            }
            
            ans=min(ans,maxN-minN);
        }
        
        return ans;
    }
};
