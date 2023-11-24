class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int round=n/3,ans=0;
        for(int i=1;i<=round;i++){
            ans=ans+piles[(n-(i*2))];
        }
        return ans;
    }    
};
