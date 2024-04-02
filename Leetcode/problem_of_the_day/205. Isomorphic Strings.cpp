class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,vector<int>>mp1,mp2;
        
        if(s.length()!=t.length()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            mp1[s[i]].push_back(i);
        }
           for(int i=0;i<t.length();i++){
            mp2[t[i]].push_back(i);
        }

         for (int i=0;i<s.length();i++){
            if (mp1[s[i]] != mp2[t[i]]){
                return false;
            }
        }

        return true;
    }
};
