class Solution {
public:
    int longestPalindrome(string s) {
        //if(s.length()==1) return 1;
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int length=0;
        for(auto i:mp){
            if(i.second%2==0) length+=i.second;
            else if(i.second>2 && i.second%2==1) length+=i.second-1;
        }
        for(auto i:mp){
            if(i.second%2==1){
                length++;
                break;
            }

        }
        return length;
    }
};
