

class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	long long N = n, ans = 0;
    	vector<long long>C(31,0);
    	for(int i = 0; i < N; i++){
    	    for(int j = 0; j < 31; j++){
    	        int mask = 1 << j;
    	        if(arr[i] & mask){
    	            C[j]++;
    	        }
    	    }
    	}
    	for(int i = 0; i < 31; i++){
    	    ans += C[i] * (N - C[i]) * (1LL << i);
    	}
    	return ans;
    }
};
