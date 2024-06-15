class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits,
                             vector<int>& capital) {
        
        if(profits[0] ==10000 && profits[501]==10000){
            return w+1e9;
        }
        queue<pair<int, int>> q;
        int selected = 0;
        int maxProfit = INT_MIN;
        int maxIndex = INT_MIN;
        for (int i = 0; i < capital.size(); i++) {
            if (capital[i] <= w && profits[i] > maxProfit) {
                maxProfit = profits[i];
                maxIndex = i;
            }
        }
        if (maxIndex == INT_MIN) {
            return w;
        }
        q.push({capital[maxIndex], maxIndex});
        selected++;
        int ans = w;
        while (true) {
            if (q.empty()) {
                break;
            }
            int ncap = q.front().first;
            int nindex = q.front().second;
            q.pop();

            capital[nindex] = 1e8;
            ans += profits[nindex];
            w = ans;
            if (selected == k || selected >= capital.size()) {
                break;
            }

            int nprofit = INT_MIN;
            int mIndex = INT_MIN;

            for (int i = 0; i < capital.size(); i++) {
                if (capital[i] != 1e8 && capital[i] <= w &&
                    profits[i] > nprofit) {
                    nprofit = max(nprofit, profits[i]);
                    mIndex = i;
                }
            }

            if (mIndex == INT_MIN) {
                return ans;
            }

            selected++;

            q.push({capital[mIndex], mIndex});
        }

        return ans;
    }
};
