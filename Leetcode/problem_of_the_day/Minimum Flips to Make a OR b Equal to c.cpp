class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip=0;
        while(a>0||b>0||c>0){
            if(c%2==1){
                if(a%2==0 && b%2==0)flip++;
            }
            else{
                if(a%2==1 && b%2==1)flip+=2;
                else if(a%2==1 || b%2==1)flip++;
            }

            a/=2;
            b/=2;
            c/=2;
        }
        return flip;
    }
};
