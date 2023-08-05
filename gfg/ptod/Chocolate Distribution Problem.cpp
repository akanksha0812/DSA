class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long ans=a[m-1]-a[0];
    for(long long i=0;i<n-m+1;i++){
        long long diff=a[i+m-1]-a[i];
        ans=min(ans,diff);
    }
    return ans;
    }   
};
