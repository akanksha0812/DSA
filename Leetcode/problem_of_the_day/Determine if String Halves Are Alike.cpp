class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int a=0,b=0;
        vector<char>voy={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0;i<n/2;i++){
            for(int j=0;j<10;j++){
                if(s[i]==voy[j]){
                    a++;
                    break;
                }
            }
        }
        for(int i=n/2;i<n;i++){
            for(int j=0;j<10;j++){
                if(s[i]==voy[j]){
                    b++;
                    break;
                }
            }
        }
        return a==b;
    }
};
