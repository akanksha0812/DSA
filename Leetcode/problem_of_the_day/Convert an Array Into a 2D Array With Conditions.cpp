class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int arr[201] = {0}; // Initialize array with all zeros
        

        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }

        int n = *max_element(arr,arr+201);
        vector<vector<int>> s(n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<201;j++)
            {
                if(arr[j]>=i)
                {
                    s[i-1].push_back(j);
                }
            }
        }
        return s;
    }
};
