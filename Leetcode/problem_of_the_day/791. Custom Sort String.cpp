class Solution {
public:
    string customSortString(string order, string s) {
        string res = "";
        set<char>st;
        for(int i=0;i<order.size();i++){
            for(int j=0;j<s.size();j++){
                if(order[i]==s[j]){
                    res.push_back(order[i]);
                    st.insert(order[i]);
                    
                }  
            }
        }
        for(char it : s){
            if(st.find(it)==st.end()){
                res.push_back(it);
            }
        }
        return res;
    }
};
