class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> mp;

        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                mp[words[i][j]]++;
            }
        }
        int n=words.size();
        for(auto it: mp){
            if(it.second%n!=0){
                return false;
            }
        }

        return true;
    }
};
