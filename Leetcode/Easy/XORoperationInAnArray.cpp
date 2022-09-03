 int ans=start;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            nums[i]=start+(2*i);
        }
        for(int i=1;i<n;i++){
            ans=ans^nums[i];
        }
        return ans;