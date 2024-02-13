class Solution {
public:
bool ans(string s){
            int l=0,h=s.size()-1;
            while(l<h){
                if(s[l]!=s[h]){
                    return false;
                }
                l++;
                h--;
            }
            return true;
        }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(ans(words[i]))
                return words[i];
        }
        return "";
    }
};
