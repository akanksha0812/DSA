class Solution {
public:
    int dotProductMatrix[505][505];
    int nums1_size, nums2_size;

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        nums1_size = nums1.size();
        nums2_size = nums2.size();

        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        for (int num : nums1) {
            firstMax = max(firstMax, num);
            firstMin = min(firstMin, num);
        }
        for (int num : nums2) {
            secondMax = max(secondMax, num);
            secondMin = min(secondMin, num);
        }

        if ((firstMax < 0 && secondMin > 0) || (firstMin > 0 && secondMax < 0)) {
            return max(firstMax * secondMin, firstMin * secondMax);
        }

        memset(dotProductMatrix, 0, sizeof dotProductMatrix);

        for (int i = nums1_size - 1; i >= 0; i--) {
            for (int j = nums2_size - 1; j >= 0; j--) {
                int currentDotProduct = nums1[i] * nums2[j] + dotProductMatrix[i + 1][j + 1];
                dotProductMatrix[i][j] = max({currentDotProduct, dotProductMatrix[i + 1][j], dotProductMatrix[i][j + 1]});
            }
        }
        return dotProductMatrix[0][0];
    }
};
