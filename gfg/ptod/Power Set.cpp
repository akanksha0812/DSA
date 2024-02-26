class Solution{
	public:
	    vector<string> v;
void f(string &s, int i, string x) {
        if(i == s.size()) { v.push_back(x); return; }
        f(s, i + 1, x + s[i]), f(s, i + 1, x);
}
vector<string> AllPossibleStrings(string s) {
	    f(s, 0, "");
	    return sort(v.begin(), v.end()), v.erase(v.begin()), v;
}
};
