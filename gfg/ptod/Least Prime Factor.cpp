class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
          vector<int> ans;
        ans.push_back(0);
        //ans.push_back(1);
        int j;
        for(int i=1;i<=n;i++)
        {
            for(j=2;j<=sqrt(i);j++)
            {
                
                if(i%j==0)
                {
                ans.push_back(j);
               break;
                }
                
            }
            if(j>sqrt(i))
            ans.push_back(i);
        }
        return ans;
    }
};
