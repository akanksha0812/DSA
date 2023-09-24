class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        map<int,int> mp;
    for(int i = 0; i < n; i++)
        mp[arr[i]]++;
    vector<int> vec = {};
    for(auto it : mp)
        if(it.second > 1)
            vec.push_back(it.first);
    if(vec.size()) return vec;
    return {-1};
    }
};
