class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int res = 1;
    while(n>0){
        if(n&1){
            res = (res*x)%M;
        }
        n = n>>1;
        x = (x*x)%M;
    }
    
    return res;
		}
};
