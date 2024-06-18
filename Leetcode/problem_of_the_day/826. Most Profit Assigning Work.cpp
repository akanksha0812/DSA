class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        vector<pair<int,int>> v;
        sort(w.begin(),w.end());
        for(int i=0;i<p.size();i++){
            v.push_back({d[i],p[i]});
        }
        sort(v.begin(),v.end());
        
        int i=0,j=0;
        int maxi=0;int ctr=0;
        
            while(j<v.size()&&i<w.size()){
                if(w[i]>=v[j].first){
                    maxi=max(maxi,v[j].second);
                    ++j;
                }
                else{
                    ctr+=maxi;
                    ++i;
                }
                
        }
        while(i<w.size()) {ctr+=maxi;i++;}
return ctr;
    }
};
