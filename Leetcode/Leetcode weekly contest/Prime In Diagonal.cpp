class Solution {
public:
    long long prime(long long n){
            if(n<=1){
                return false;
            }
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    return false;
                }
            }
            return true;
        }
    int diagonalPrime(vector<vector<int>>& nums) {
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(prime(nums[i][i])){
                ans.push_back(nums[i][i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(prime(nums[i][nums.size() - i - 1])){
                ans.push_back(nums[i][nums.size() - i - 1]);
            }
        }
        // long long m=INT_MIN;
        // for(int i=0;i<ans.size();i++){
        //     m= max(m,ans[i]);
        // }
        // return m;
        int max=ans.size();
        if(max<0){
            return 0;
        }
        else{
            return *max_element(ans.begin(),ans.end());
        }
    }
};
