class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n==0){
                return 0;
            }
            
            int check=n;
            int ans=n;
            int a=maxSum(n/2);
            int b=maxSum(n/3);
            int c=maxSum(n/4);
            
            int divide=a+b+c;
            
            if(divide>ans){
                ans=divide;
            }
            
            
            return ans;
        }
};
