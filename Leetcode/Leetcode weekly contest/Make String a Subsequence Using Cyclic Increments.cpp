class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n1=str1.size();
        int n2=str2.size();
        if(n2>n1){
            return false;
        }
        int p = 0;
        for(int i=0;i<n1 && p<n2;i++){
            if(str1[i]==str2[p]) {
                p++;
            } 
            else if(((str1[i]-'a')+1)%26+'a'==str2[p]){
                p++;
            }
        }
        return p==n2;
    }
};
