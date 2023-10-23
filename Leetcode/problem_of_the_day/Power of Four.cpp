class Solution {
public:
    bool isPowerOfFour(int n) {

        //*********Method 1 tc=logn sc=1;
        // if(n==0){
        //     return false;
        // }
        // while(n%4==0){
        //    n=n/4;
        // }
        // if(n==1){
        //     return true;
        // }
        
        // return false;
        
        set<int> fourPower;
        int a=15;
        int x=1;
        fourPower.insert(x);

        for(int i=1;i<a+1;i++){
            x=x*4;
            fourPower.insert(x);
        }

        return fourPower.count(n);
    }
};
