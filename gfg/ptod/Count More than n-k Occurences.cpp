class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int c=n/k;
        int count =0;
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto &i:mp){
            if(i.second>c){
                count++;
            }
        }
        
        return count;
    }
};
