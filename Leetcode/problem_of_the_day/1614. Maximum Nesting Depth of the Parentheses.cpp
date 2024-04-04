class Solution {
public:
    int maxDepth(string s) {
        int l=0,r=0,count=0,max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                if(count>max){
                    max=count;
                }
                count--;
            }
        }
        return max;
    }
};
