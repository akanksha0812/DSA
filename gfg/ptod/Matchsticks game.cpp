class Solution {
  public:
    int matchGame(long long N) {
        // code here
        long long a=N%5;
        if(a==0){
            return -1;
        }
        return a;
    }
};
