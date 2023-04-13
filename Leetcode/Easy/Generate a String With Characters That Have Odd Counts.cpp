class Solution {
public:
    string generateTheString(int n) {
        string res="";
        if(n%2!=0){
            for(int i=0;i<n;i++){
                res.push_back('a');
            }
            return res;
        }
        else{
            res.push_back('a');
            for(int i=0;i<n-1;i++){
                res.push_back('b');
            }
            return res;
        }
    }
};
