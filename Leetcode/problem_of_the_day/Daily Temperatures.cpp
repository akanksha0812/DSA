class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res (t.size(),0);
        
        for (int i = t.size()-2; i >=0; i--)
        {   
            int j = i + 1; 
            while(res[j] and t[j] <= t[i]) 
                j += res[j];
            if(t[i] < t[j])
                res[i] = j-i;
        }
        return res;
    }
};
