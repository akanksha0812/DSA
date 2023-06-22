class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int count5=0,count10=0;
        for(int i=0;i<N;i++){
            if(bills[i]==5){
                count5++;
            }
            else if(bills[i]==10){
                count10++;
                if(count5>0){
                    count5--;
                }else{
                    return false;
                }
            }else if(bills[i]==20){
                if(count5>0 && count10>0){
                    count5--;
                    count10--;
                }else if(count5>2){
                    count5-=3;
                }else{
                    return false;
                }
            }
            
        }
        return true;
    }
