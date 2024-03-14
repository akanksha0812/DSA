class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        unordered_map<int, int> sum_count;
        int current_sum = 0;
    
    sum_count[0] = 1; // Initialize with 0 sum
    
    for (int num : nums) {
        current_sum += num;
        count += sum_count[current_sum - goal];
        sum_count[current_sum]++;
    }
    
    return count;
    }
};
