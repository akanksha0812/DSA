class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n = player1.size();
        int sum1= 0, sum2 = 0;

        for (int i=0;i<n;i++) {
            int val1,val2;
            if((i>0 && player1[i-1]==10) || (i>1 && player1[i-2]==10)) {
                val1=2*player1[i];
            } 
            else{
                val1=player1[i];
            }

            if((i>0&& player2[i-1]==10) || (i>1 && player2[i-2]==10)) {
                val2=2*player2[i];
            }
            else{
                val2=player2[i];
            }
            sum1 +=val1;
            sum2 +=val2;
        }
        
        if(sum1>sum2){
            return 1;
        } 
        else if(sum2>sum1){
            return 2;
        } 
        else{
            return 0;
        }
    }
};