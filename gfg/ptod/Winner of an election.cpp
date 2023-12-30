class Solution{
  public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        string name;
        int votes=0;
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto it: mp){
            if(it.second>votes || (it.second==votes && it.first< name)){
                votes=it.second;
                name=it.first;
            }
        }
        
        
        string s= to_string(votes);
        vector<string> ans;
        ans.push_back(name);
        ans.push_back(s);
        
        return ans;
    }
};
