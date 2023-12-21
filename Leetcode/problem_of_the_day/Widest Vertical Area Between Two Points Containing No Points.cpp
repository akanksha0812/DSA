class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // vector<int>p;
        // for(int i=0;i<points.size();i++){
        //     p.push_back(points[i][0]);
        // }
        sort(points.begin(),points.end());
        int ans=0;
        for(int i=0;i<points.size()-1;i++){
            ans=max(ans,points[i+1][0]-points[i][0]);
        }
        return ans;

    }
};
