//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<N;i++){
            if(mp[arr[i]]==1)return arr[i];
        }
        return arr[0];
    }
};
