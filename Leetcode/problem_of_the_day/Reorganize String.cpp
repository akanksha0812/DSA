class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(auto it: s){
            mp[it]+=1;
        }

        vector<char> temp;
        for(auto &pair:mp){
            temp.push_back(pair.first);
        }
        sort(temp.begin(),temp.end(), [&](char a, char b){
            return mp[a]>mp[b];
        });

        if(mp[temp[0]]>(s.length() +1)/2){
            return "";
        }
        string res(s.length(), ' ');
        int i = 0;
        for(char c: temp){
        for(int j=0;j<mp[c];++j){
            if (i>=s.length()){
                i=1;
            }
            res[i]=c;
            i+=2;
        }
    }

    return res;

    }
};
