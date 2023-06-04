class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>se;
        for(int i =0 ; i< s.length(); i++){
            se.insert(s[i]);
        }
        return se.size();
    }
};
