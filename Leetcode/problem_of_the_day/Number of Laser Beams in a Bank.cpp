class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if(bank.size()==1)return 0;
        vector<int> v;
        int o = 0;
        for(auto &i: bank){
            o = 0;
            for(auto &j: i){
                if(j=='1'){
                    o++;
                }
            }
            if(o)v.push_back(o);
        }
        if(v.size()<=1)return 0;
        int ans = 0;
        for(int i = 0; i < v.size()-1; i++){
            ans += v[i]*v[i+1];
        }
        return ans;
    }
};
