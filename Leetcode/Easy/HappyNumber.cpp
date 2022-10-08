class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        for(;n;n/=10){
            int a=n%10;
            sum+=a*a;
        }
        if(sum==1){
            return true;
        }
        if(sum==4){
            return false;
        } 
        return isHappy(sum);
    }
};