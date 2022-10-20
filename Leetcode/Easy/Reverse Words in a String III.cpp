class Solution {
public:
    string reverseWords(string s) {
        int c=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' ' || s[i]=='\0'){
                 reverse(s.begin()+c,s.begin()+i);
                 c=i+1;
            }
        }
        return s;
    }
};