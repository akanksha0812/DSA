class Solution {
  public:
    double fdiv(string str) {
        string a="",b="";
        int c=0;
        for(int i=0; i<str.size(); i++){
            if (str[i]=='/') c=1;
            else if (c==0) a+=str[i];
            else b+=str[i];
        }
        return stod(a)/stod(b);
    }
  public:
    string compareFrac(string str) {
        string a="",b="";
        int c=0;
        for(int i=0; i<str.size(); i++){
            if (str[i]==',' || str[i]==' ') c=1;
            else if (c==0) a+=str[i];
            else b+=str[i];
        }
        double da=fdiv(a),db=fdiv(b);
        if (da>db) return a;
        else if (da<db) return b;
        else return "equal";
    }
};
