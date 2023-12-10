class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        for(int i=0;i<n;i++){
            int sum=arr[i];
            for(int j=i+1;j<n;j++){
                sum+=arr[j];
                if(sum==0){
                    return 1;
                }
            }
        }
        
        return 0;
    }
};
