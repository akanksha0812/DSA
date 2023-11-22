class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int upLimit = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i].size() + i > upLimit) {
                upLimit = nums[i].size() + i;
            }
        }

        vector<int> placeCount(upLimit + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                placeCount[i + j]++;
            }
        }

        for (int i = 1; i <= upLimit; i++) {
            placeCount[i] += placeCount[i - 1];
        }

        vector<int> ans(placeCount[upLimit]);

        for (int i = upLimit; i > 0; i--) {
            placeCount[i] = placeCount[i - 1];
        }
        placeCount[0] = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            for (int j = 0; j < nums[i].size(); j++) {
                ans[placeCount[i + j]] = nums[i][j];
                placeCount[i + j]++;
            }
        }

        return ans;
    }
};
