class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i=0 ,n=nums.size();
        int k=n;
        for(int i=0;i<n-1;i++){
            nums.push_back(nums[i]);
        }
        stack<int>s;
        n=nums.size();
        vector<int> ans(n,-1);
        for(i=n-1;i>=0;i--){
          while(!s.empty( ) && s.top()<=nums[i]){
             s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        s.push(nums[i]);
    }
        return vector(ans.begin(),ans.begin()+k);
  }
};