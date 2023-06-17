class Solution {
public:
    map<pair<int,int>,int> store;
    int help(int i,int prev,vector<int> &v,vector<int> &v2){
        if(i>=(int)v.size()){
            return 0;
        }
        if(store.count({i,prev})){
            return store[{i,prev}];
        }
        int ans=1e5;
        if(prev<v[i]){
            ans=help(i+1,v[i],v,v2);
        }
        int x=upper_bound(v2.begin(),v2.end(),prev)-v2.begin();
        if(x<v2.size()){
            ans=min(ans,help(i+1,v2[x],v,v2)+1);
        }
        return store[{i,prev}]=ans;
    }
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(),arr2.end());
        store.clear();
        int ans=help(0,-1,arr1,arr2);
        return ans>=1e4?-1:ans;
    }
};
