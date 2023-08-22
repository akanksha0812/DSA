class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        if(columnNumber<=26){
            return string(1,'A'+(columnNumber-1)%26);
        }
        while(columnNumber>0){
            if(columnNumber%26==0){
                ans += 'A' + 25;
                columnNumber -= 1;
            }
            else{
                ans += 'A'+columnNumber%26-1;
            }
            columnNumber /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
