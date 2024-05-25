class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        long long j=0;
        long long sum = 0;
        long long currSum=0;
        while(j<n)
        {
            if(arr[j] > k) 
            {
                currSum=0;
            }
            else{
                currSum+=arr[j];
            }
            sum=max(sum,currSum);
            j++;
        }
        return sum;
       
    }
};
