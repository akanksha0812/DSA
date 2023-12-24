class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        
        vector<pair<int,int>> v(n);
        
        for(int i=0;i<n;i++){
            v[i]={price[i],i+1};
        }
        
        sort(v.begin(),v.end());
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            int can_buy= min(v[i].second, k/v[i].first);
            
            k=k-(can_buy*v[i].first);\
            
            ans=ans+can_buy;
        }
        
        return ans;
    }
};
