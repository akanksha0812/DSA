class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,ans=0;
        for(int i=0;i<gain.size();i++){
            a=a+gain[i];
            ans=max(a,ans);
        }
        return ans;
    }
};
