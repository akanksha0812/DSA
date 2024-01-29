class Solution{
	public:
	int dp[101][901] ;
    
    
    int solve( string str , int i , int prev )
    {
        if( i == str.size()) return 1 ;
        
        if( dp[i][prev] != -1 ) return dp[i][prev] ;
        
        int ans = 0 , sum = 0 ;
        
        for( int j = i ; j < str.size() ; j++ )
        {
            sum += str[j] - '0' ;
            if( sum >= prev )
            {
                ans += solve( str , j + 1 ,  sum ) ;
            }
        }
        
        return dp[i][prev] =  ans ;
    }
    int TotalCount(string str){
        // Code here
        memset( dp , -1 , sizeof(dp) ) ;
        int  ans = 0 ;
        int prev = 0 ;
        
        for( int i = 0 ; i < str.size() ; i++ )
        {
            prev += str[i] - '0' ;
            ans  += solve( str , i+1 , prev ) ;
        }
        
        return ans ;
        
    }

};
