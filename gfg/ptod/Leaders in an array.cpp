class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int min=INT_MIN;
        for(int i=n-1;i>=0;i--){
            
            if(a[i]>=min){
                ans.push_back(a[i]);
                min=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
