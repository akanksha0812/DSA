class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>a;
        int n=0;
        int m=INT_MAX;
        char si='Z',ei='A';
        for(int i=0;i<s.length();i++){
            if(s[i]==':')continue;
            if(s[i]-'A'<si-'A')si=s[i];
            if(s[i]-'A'>ei-'A')ei=s[i];
            n=max(n,s[i+1]-'0');
            m=min(m,s[i+1]-'0');
            i++;
        }
        for(char ch=si;ch<=ei;ch++){
            for(int i=m;i<=n;i++){
                string c="";
                c+=ch;
                c+=to_string(i);
                a.push_back(c);
            }
        }
        return a;
    }
};