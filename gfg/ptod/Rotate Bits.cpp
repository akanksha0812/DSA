class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d=d%16;
            int l=((n<<d) | (n>>(16-d))) & 65535;
            int r=((n>>d) | (n<<(16-d))) & 65535;
         
            return {l,r};
        }
};
