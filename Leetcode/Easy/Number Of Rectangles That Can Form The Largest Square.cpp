class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size(),mini=INT_MAX,maxi=INT_MIN,count=0;
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            mini=min(rectangles[i][0],rectangles[i][1]);
            temp.push_back(mini);
        }
        for(int i=0;i<n;i++)
        {
            if(maxi<temp[i])maxi=temp[i];
        }
        for(int i=0;i<n;i++)
        {
            if(temp[i]==maxi)count++;
        }
        return count;
    }
};