//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int count = 1;
    while (n > 0 && (n & 1) == 0) {
        n >>= 1;
        count++;
    }
    return n > 0 ? count : 0;
    }
};
