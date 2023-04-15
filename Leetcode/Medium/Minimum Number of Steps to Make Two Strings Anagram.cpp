class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            m[t[i]-'a']--;
        }
        int count=0;
        for(auto a:m){
            count+=abs(a.second);
        }
        return count/2;
    }
};