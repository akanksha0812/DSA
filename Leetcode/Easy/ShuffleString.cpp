  int n=indices.size();
        string ans(n, ' ');
        for(int i=0;i<n;i++){
            ans[indices[i]]=s[i];
        }
        return ans;