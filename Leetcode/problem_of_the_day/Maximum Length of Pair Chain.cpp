class Solution {
public:
    static bool compare(const vector<int> &a,const vector<int>&b)
    {
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        //sort according to right
        sort(pairs.begin(),pairs.end(),compare);
        int last=pairs[0][1],n=pairs.size();
        int ans=1;
        for(int i=1;i<n;i++)
        {
            if(pairs[i][0]>last)
            {
                ans++;
                last=pairs[i][1];
            }
        }
        return ans;
    }
};
