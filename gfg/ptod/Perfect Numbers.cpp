class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum=0;
        long long a = N;
        long long b = N;
        
        for(int i=1;i<sqrt(N);i++){
            if(N%i==0){
                sum=sum+i;
                if(b/i != a)
                    sum+=b/i;
            }
        }
        if(sum==N){
            return 1;
        }else{
            return 0;
        }
    }
};
