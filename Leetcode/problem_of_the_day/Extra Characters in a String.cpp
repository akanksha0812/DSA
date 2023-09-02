class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
    vector<int> dp(n + 1, n + 1);
    dp[0] = 0;

    unordered_set<string> dict(dictionary.begin(), dictionary.end());

    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (dict.find(s.substr(j, i - j)) != dict.end()) {
                dp[i] = min(dp[i], dp[j]);
            }
        }
        dp[i] = min(dp[i], dp[i - 1] + 1);
    }

    return dp[n];
    }
};
