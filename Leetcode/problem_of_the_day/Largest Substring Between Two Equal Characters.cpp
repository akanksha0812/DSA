class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;

        for(int i=0;i<s.size();i++){
            char a=s[i];
            for(int j=i+1;j<s.size();j++){
                if(s[j]==a){
                    ans=max(ans, (j-i)-1);
                }
            }
        }

        return ans;
    }
};
