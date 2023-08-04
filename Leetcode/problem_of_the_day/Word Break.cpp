class Solution {
public:
    bool wordBreak(string s, 
    vector<string>& wordDict) {
        int n = s.size();
        vector<int>pos_combo(n, 0);      
        set<string>st(wordDict.begin(), wordDict.end());
        string curr = "";
        for(int i = 0; i < n; i++)
        {
            curr += s[i];
            string right = "";
            if(st.find(curr) != st.end())
            {
                pos_combo[i]++;
       
            }
            for(int j = 0; j < curr.size() - 1; j++)
            {
                right = s[i - j] + right;
           
                if(st.find(right) != st.end())
                {
                    if(pos_combo[i - right.size()])
                    {
                        pos_combo[i]++;
                        // break;
                    }
                }
            }
        }
        return pos_combo[n - 1] >= 1;
    }
};
