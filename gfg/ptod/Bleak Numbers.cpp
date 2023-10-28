class Solution
{
public:
    unsigned int countSetBits(unsigned int n)
    {
        unsigned int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

	int is_bleak(int n)
	{
	    // Code here.
	    int useful_bits = ceil(log2(n));
        for(int i=n-1; i>= n - useful_bits; i--)
        {
            if(i + countSetBits(i) == n) return 0;
        }
        return 1;
	}
};
