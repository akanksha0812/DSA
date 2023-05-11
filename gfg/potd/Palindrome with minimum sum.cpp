class Solution {
  public:
    int minimumSum(string s) {
        // code here
        vector<char> pos;
    int n = s.length();
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=s[n-i-1])
        {
            if(s[i]=='?') s[i] = s[n-i-1];
            else if(s[n-i-1]=='?') s[n-i-1] = s[i];
            else return -1;
        }
        if(s[i]!='?') pos.push_back(s[i]);
    }
    
    if(pos.size()<=1) return 0;
    
    int res = 0;
    for(int i=1; i<pos.size(); i++) res += abs(pos[i]-pos[i-1]);
    return res;
    }
};
