class Solution {
public:
    int totalMoney(int n) {
        int sum =0;
        int amt =1,b=0;

        for(int i=0;i<n;i++){
            if((i%7)==0){
                b=b+1;
                amt=b;
            }
            sum=sum+amt;
            amt=amt+1;
        }

        return sum;

    }
};
