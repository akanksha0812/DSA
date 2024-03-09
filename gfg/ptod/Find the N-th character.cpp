class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string ans=s;
        for(int i=0;i<r;i++)
        {
            string result="";
            for(int j=0;j<=n;j++)
            {
                if(ans[j]=='0')
                    result+="01";
                else
                    result+="10";
            }
            ans=result;
        }
        return ans[n];
    }
};
