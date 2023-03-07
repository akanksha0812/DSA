class Solution {
public:
    int numberOfBeams(vector<string>& b) {
        
        int n  = b.size();
        
        int x = count(b[0].begin(),b[0].end(),'1');
        int y = count(b[n-1].begin(),b[n-1].end(),'1');
        
        if(x==0 && y==0)
            return 0;
            
        int res = 1;
        vector<int> ans;
        for(auto &i: b)
        {
            int temp = count(i.begin(),i.end(),'1');
            if(temp!=0){
                ans.push_back(temp);
            }
            
        }
        res=0;
        for(int i=0;i<ans.size()-1;i++)
        {
            int t = ans[i]*ans[i+1];
            res+=t;
        }
        
        return res;
    }
};