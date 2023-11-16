class Solution {
public:
    string ans = "";
    map<string, bool>vis;
    bool recurr(int n, string &str){
       if(str.length() == n){
           if(vis[str] == false){
               ans = str;
               return true;
           }
           return false;
       }
        str = str+"1";
        if(recurr(n,str))
        {
            str.pop_back();
            return true;
        }
        str.pop_back();
        str=str+"0";
        if(recurr(n,str)){
            str.pop_back();
            return true;
        }
        str.pop_back();
        return false;


    }
    string findDifferentBinaryString(vector<string>& nums) {
        for(int i=0; i<nums.size(); i++){
            vis[nums[i]] = true;
        }
        int n = nums[0].size();
        string str = "";
        recurr(n,str);
        return ans;
    }
};
