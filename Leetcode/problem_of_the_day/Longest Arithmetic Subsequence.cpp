class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return n;
        }

        vector<unordered_map<int, int>> differenceHistory(n);
      

        int maxi = 1;
        for(int i = 1; i<n; i++){
            for(int j = 0; j<i; j++){
                

                int diff =  nums[i]-nums[j];
                int cnt = 1;

                if(differenceHistory[j].count(diff)!=0){
                    cnt = differenceHistory[j][diff];
                }
                differenceHistory[i][diff] = 1 + cnt;
                maxi = max(maxi, differenceHistory[i][diff]);
            }
        }
        return maxi;
    }
};
