class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int x=N/K;
        int y=N%K;
        if(x%2==0){
            x=((x/2)*K)+1;
            if(y>0){
                x=x+y-1;
            }
        }
        else{
            x=((x/2)+1)*K;
            if(y>0){
                x=x+1;
            }
        }
        return x;
    }
};
