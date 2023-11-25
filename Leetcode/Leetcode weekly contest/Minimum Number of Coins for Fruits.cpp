class Solution { 
public: 
    int minimumCoins(vector<int>& prices) { 
        int rayan = prices.size();     
        vector<int> dp(rayan + 1);    
        for(int i = rayan - 1; i >= 0; i--) { 
            dp[i] = prices[i]; 
            int nextI = i + 1; 
            int jogi = INT_MAX; 
            for(int j = i + 1; j <= min(rayan, i + nextI + 1); j++) { 
                jogi = min(dp[j], jogi); 
            } 
            if(jogi < INT_MAX) dp[i] += jogi;      
        } 
        return dp[0]; 
    } 
};
