class Solution {
public:
    string removeTrailingZeros(string num) {
        string result=num;
        int i=result.length()-1;
        while(i>=0 && result[i]=='0'){
            result.pop_back();
            i--;
        }
        
        
        // for(int i=num.size()-1;i>0;i--){
        //     if(num[i]=='0'){
        //         num.pop_back();
        //     }
        // }
         return result;
    }
};
