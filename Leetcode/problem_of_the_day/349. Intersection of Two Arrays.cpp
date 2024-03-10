class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> V(1000,0);
        for(int i=0;i<a.size();i++){
            V[a[i]]=1;
        }
        vector<int> ans;
        for(int i=0;i<b.size();i++){
            if(V[b[i]]){
                V[b[i]]=0;
                ans.push_back(b[i]);
            }
        }
        return ans;
    }
};
