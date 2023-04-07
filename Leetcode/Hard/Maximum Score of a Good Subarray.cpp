class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> nex_small(n,n);
        vector<int> prev_small(n,-1);
        stack<int> st,st1;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(i);
                continue;
            }

            while(!st.empty() && nums[st.top()]>nums[i]){
                nex_small[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }

        for(int i=n-1;i>=0;i--){
            if(st1.empty()){
                st1.push(i);
                continue;
            }

            while(!st1.empty() && nums[st1.top()]>nums[i]){
                prev_small[st1.top()]=i;
                st1.pop();
            }
            st1.push(i);
        }
        int ans=0;
        for(int x=0;x<n;x++){
            int i=prev_small[x];
            int j=nex_small[x];
            int val=nums[x];
            
            if((i+1)<=k && (j-1)>=k){
                ans=max(ans,(j-i-1)*val);
            }
        }
        return ans;
    }
};
