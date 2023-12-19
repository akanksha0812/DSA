//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
          int result = ffs(m^n);
        if(result == 0)          //If no any bit match than function will                                             //return 0 but we need -1.
            return -1;
            
        return result;
    }
};
