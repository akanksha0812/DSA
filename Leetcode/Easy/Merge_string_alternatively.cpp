class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sol="";
        int p=word1.size(), q=word2.size();
        int n=max(p,q);
        for(int i=0;i<n;i++){
            if(p){
                sol+=word1[i];
                p--;
            }
            if(q){
                sol+=word2[i];
                q--;
            }
        }
        return sol;
    }
};