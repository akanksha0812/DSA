// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        int l[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    l[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1]){
                    l[i][j]=l[i-1][j-1]+1;
                }
                else{
                    l[i][j]=max(l[i-1][j],l[i][j-1]);
                }
            }
        }
        return l[n][m];
    }
};
