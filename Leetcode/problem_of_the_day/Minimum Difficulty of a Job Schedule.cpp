class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        if(jobDifficulty.size() < d) return -1; //edge case

        int n=jobDifficulty.size();
        vector<int> curr(n+1,1e9),prev(n+1,1e9);
        prev[n]=0; //base case

        for(int D=1;D<=d;++D) {
            for(int idx=n-1;idx>=0;--idx) {
                int maxi=0,ans=1e9;
                for(int i=idx;i<n;++i) {
                    maxi=max(maxi,jobDifficulty[i]);
                    int res=prev[i+1];
                    if(res!=1e9) ans=min(ans,maxi+res);
                }
                curr[idx]=ans;
            }
            prev=curr;
        }
        return curr[0];
    }
};
