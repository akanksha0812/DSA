class Solution {
public:
    // int ans=0;
    vector<vector<int>> dp;
    int mod=1e9+7;
    int cr(vector<int>& l, int s, int f, int fu){
        if(fu<0 || s>=l.size()) return 0;
        // if(dp[s][fu]!=-1) return dp[s][fu];

        long long int ans=0;
        if(s==f){
           ans++;
        //    cout<<ans<<endl;
           
        }
        if(dp[s][fu]!=-1) return dp[s][fu];
        // int ans=0;
        for(int i=0;i<l.size();i++){
            if(i!=s){
                int d=abs(l[s]-l[i]);
                
                ans=ans+cr(l,i,f,fu-d);
            }
        }
        return dp[s][fu]=ans%mod;
    
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        vector<int> l;
        l=locations;
        int s=start;
        int f=finish;
        int fu=fuel;
        int m=locations.size();
        vector<vector<int>> dp2(m,vector<int>(fu+1,-1));
        dp=dp2;
        return cr(l,s,f,fu);
        
    }
};
