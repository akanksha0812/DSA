class Solution {
public:
    // x^n = exp(n*log(abs(x))) 
    double myPow(double x, int n) {
        if(x==0){
            return 0;
        }
        if(x<0 && n%2!=0){
            return -exp(n*log(abs(x)));
        }
        return exp(n*log(abs(x)));
    }
};
