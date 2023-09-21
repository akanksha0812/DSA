class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
         if(n == 0) return 0;
        if(n == 1) return arr[0];
    
        int include = arr[0];  // Maximum sum including the previous element
        int exclude = 0;       // Maximum sum excluding the previous element
    
        for (int i = 1; i < n; i++) {
            // Current maximum excluding i
            int new_exclude = max(exclude, include);
    
            // Current maximum including i
            include = exclude + arr[i];
            exclude = new_exclude;
        }
    
        // Return the maximum value of include and exclude
        return max(include, exclude);

    }
};
