class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string r1="";
        int n=str1.length();
        for(int i=2;i<n;i++)
        {
            r1+=str1[i];
        }
        r1+=str1[0];
        r1+=str1[1];
        if(str2==r1)
        {
            return 1;
        }
        else
        {
            string r2="";
            r2+=str1[n-2];
            r2+=str1[n-1];
            for(int i=0;i<n-2;i++)
            {
                r2+=str1[i];
            }
            if(str2==r2)
            {
                return 1;
            }
        }
        return 0;
    }

};
