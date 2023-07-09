class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        unordered_set<int> positiveSet;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                positiveSet.insert(arr[i]);
            }
        }
        for (int i = 1; i <= n + 1; i++) {
            if (positiveSet.find(i) == positiveSet.end()) {
                return i;
            }
        }
    } 
};
