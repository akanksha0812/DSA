class Solution {
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        sort(offers.begin(), offers.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        vector<int> arr(n, 0);
        int oI = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = (i > 0) ? arr[i - 1] : 0; 
            
            while (oI < offers.size() && offers[oI][1] == i) {
                int start = offers[oI][0];
                int gold = offers[oI][2];
                arr[i] = max(arr[i], (start > 0 ? arr[start - 1] : 0) + gold);
                oI++;
            }
        }

        return arr[n - 1];
    }
};
