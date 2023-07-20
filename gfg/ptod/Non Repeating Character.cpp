class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       vector<int> vec(26,0);
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<S.size();i++){
            mp[S[S.size()-1-i]]++;
        }
        
        for(int i=0;i<S.size();i++){
            if(mp[S[i]]==1)
            return S[i];
        }
        
        return '$';
       
    }

};
