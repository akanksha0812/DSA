#define mod 1000000007
class Solution{
public:
int TotalWays(int N)
{     
   
   long   int lastbuilding = 1 ;
  long  int lastempty = 1 ;
    long long int ans =2 ; 
    while((N--)>1){
   
    
long long    int lastempty2 = (lastbuilding+lastempty)%mod ;
 
    
    ans = (lastbuilding + lastempty + lastempty) % mod;
    lastbuilding = lastempty ;
    
    lastempty = lastempty2 ;
   
    }
    return (ans*ans)%mod ;
    
}
};
