//User function Template for C++

class Solution{
    public:
    // int findSingle(int n, int arr[]){
    //     // code here
    //     // unordered_map<int,int>mp;
    //     // for(int i=0;i<n;i++){
    //     //     mp[arr[i]]++;
    //     // }
        
    //     // for (auto it:mp){
    //     //     if(it.second%2!=0)
    //     //         return it.first;
    //     // }
        
        
    // }
    static int findSingle(int n, int arr[]){
        // code here
        int ans = 0 ;
        for( int i = 0 ;i < n ; i++ )
        {
            ans = ans ^ arr[i] ;
        }
        return ans ;
    }
};
