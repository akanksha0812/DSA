class Solution {
public:
    bool isAP(vector<int>arr, int l, int r){
        vector<int>ans;
        for(int i=l;i<=r;i++){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(), ans.end());
        for(int i=1;i<ans.size()-1;i++){
            if(ans[i]-ans[i-1]!=ans[i+1]-ans[i]){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        
        for(int i=0;i<l.size();i++){
            bool flag = isAP(nums, l[i], r[i]);
            ans.push_back(flag);
        }
        
        return ans;
    }
};