class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int ans = 0;
        while(n>1) {
            if(n&1)
                n--;
            else
                n = (n>>1);
            ans++;
        }
        return ans+1;
    }
};
