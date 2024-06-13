class Solution {
  public:
    int padovanSequence(int n) {
        // code here.
        if(n<=2) return 1;
       int n1=1, n2=1, n3=1, ans;
       int mod=1e9+7;
       for(int i=0;i<n-2;i++){
           ans=(n2+n3)%mod;

           n3=n2;
           n2=n1;
           n1=ans;
       }
       return ans;
    }
};
