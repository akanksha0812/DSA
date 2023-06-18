class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans=0;
        while(true){
            if(mainTank>=5){
                mainTank-=5;
                int m=5*10;
                ans=ans+m;
                if(additionalTank>0){
                    mainTank++;
                    additionalTank--;
                }
            }
            else{
                break;
            }
        }
            int m=mainTank*10;
            return ans+m;
    }
};
