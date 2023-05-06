class Solution {
public:
    int numSubseq(vector<int>& a, int target) {
        constexpr int MOD = int(1e9) + 7;
        int n = int(a.size());
        vector<int> power(n);
        power[0] = 1;
        for (int i = 1; i < n; ++i) {
            power[i] = 2 * power[i - 1] % MOD;
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0, j = n; i < n; ++i) {
            while (j - 1 >= 0 && a[i] + a[j - 1] > target) j--;
            if (j - i - 1 >= 0) ans = (ans + power[j - i - 1]) % MOD;
        }
        return ans;
    }
};
