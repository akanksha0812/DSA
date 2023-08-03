class Solution {
private:
     vector<string>ans;
     map<int,string>mp;
public:
    void permute(string digits, string &s, int index){
        if(index==digits.size()){
            ans.push_back(s);
            return ;
        }

        for(auto it:mp[digits[index]-'0']){
            s.push_back(it);
            permute(digits,s,index+1);
            s.pop_back();
        }
        return;
    }


    vector<string> letterCombinations(string digits) {
        string s="";
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        if(digits==""){
            return ans;
        }
        permute(digits,s,0);
        return ans;
    }
};
