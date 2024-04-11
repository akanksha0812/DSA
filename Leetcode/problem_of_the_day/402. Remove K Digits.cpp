class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = ""; s += num[0];
        for(int i=1;i<num.length();++i) {
            if(k > 0 && s.length() > 0 && num[i] < s[s.length()-1]) {
                s.pop_back();
                k--;
                i--;
                continue;
            }
            else
            s += num[i];
        }
        while(k > 0 && s.length() > 0) {
            s.pop_back();
            k--;
        }

        while(s[0] == '0') { 
            s.erase(s.begin());
        }
        
        if(s.length() == 0) s = "0"; 
        return s;
    }
};
