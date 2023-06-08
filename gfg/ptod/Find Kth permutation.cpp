class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        string ans="";
        for(int i=0;i<n;i++){
            ans=ans+ to_string(i+1);
            
        }
        for(int i=0;i<k-1;i++){
            next_permutation(ans.begin(), ans.end());
        }
        return ans;
    }
};
