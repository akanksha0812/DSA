class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int lower = lower_bound(arr, arr + n, x) - arr,
        upper = upper_bound(arr, arr + n, x) - arr;
    
        if(lower >= n || arr[lower] != x || upper - 1 < 0 || arr[upper - 1] != x){
            return {-1, -1};
        }
    
        return {lower, upper - 1};
    }
};
