class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        std::sort(points.begin(), points.end());
        int n = points.size();
        int i = 0;
        int ans = 0;
        while(i < n)
        {
            int end = points[i][1];
            int j = i;
            while(j < n)
            {
                if(end < points[j][0])
                {
                    break;
                }
                end = std::min(points[j][1],end);
                j++;
            }
            ans++;
            i = j;
        }
        return ans;
    }
};
