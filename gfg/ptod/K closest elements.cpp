class Solution {
  public:
    struct Compare {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
            if (a.first == b.first) {
                return a.second > b.second; // If first elements are equal, sort by second element in descending order
            }
            return a.first < b.first; // Otherwise, sort by first element
        }
    };
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        multiset<pair<int, int>, Compare> s;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            pair<int, int> p = make_pair(abs(x - arr[i]), arr[i]);
            s.insert(p);
        }
        for (const auto& p : s) {
            if(p.second == x)
                continue;
            if(k > 0) {
                ans.push_back(p.second);
                k--;
            }
        }
        return ans;
    }
};
