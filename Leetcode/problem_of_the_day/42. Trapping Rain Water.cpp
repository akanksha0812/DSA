class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); // Number of bars
        int left[n]; // Array to store the maximum height of bars to the left of current bar
        left[0] = height[0]; // The leftmost bar has no bars to its left, so its height is itself
        int right[n]; // Array to store the maximum height of bars to the right of current bar
        right[n-1] = height[n-1]; // The rightmost bar has no bars to its right, so its height is itself
        int ans =  0; // Variable to store the total trapped water
        
        // Calculating the maximum height of bars to the left of each bar
        for(int i = 1; i<n; i++){
            left[i] = max(left[i-1] , height[i]);
        }
        
        // Calculating the maximum height of bars to the right of each bar
        for(int i = n-2; i>=0; i--){
            right[i] = max(right[i+1] , height[i]);
        }
        
        // Calculating the amount of trapped water for each bar
        for(int i = 0;  i<n; i++){
            int x = min(left[i] , right[i]) - height[i]; // Water trapped above current bar
            ans = ans + x; // Adding trapped water to the total
        }
        
        return ans; // Returning the total trapped water
    }
};
