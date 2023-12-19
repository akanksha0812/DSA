class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>>ans(m,vector<int>(n));
        long long sum=0,item=0,avg=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum=0;
                item=0;
                for(int k=i-1;k<=i+1;k++){
                    for(int l=j-1;l<=j+1;l++){
                        if(k>=0 && k<m && l>=0 && l<n){
                            sum+=img[k][l];
                            item++;
                        }
                    }
                }
                avg=sum/item;
                ans[i][j]=avg;
            }
        }
        return ans;
    }
};
