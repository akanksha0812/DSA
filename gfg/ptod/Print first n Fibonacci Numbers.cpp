//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>ans;
        if(n==1){
            return {1};
        }
        long long a=1;
        long long b=1,c;
        ans.push_back(1);
        ans.push_back(1);
        for(long long i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            ans.push_back(c);
        }
        return ans;
    }
};
