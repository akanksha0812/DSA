class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        auto carry=1;
        for(auto &x : digits){
            if(carry==0){
                break;
            }
            ++x;
            if(x>9){
                x=0;
            }else{
                carry=0;
            }
        }
        if(carry){
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};