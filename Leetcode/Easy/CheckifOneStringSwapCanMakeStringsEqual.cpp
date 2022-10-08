class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        int a=-1,b=-1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                count++;
                if(a==-1){
                    a=i;
                }
                else{
                    b=i;
                }
            }
        }
        if(count==0){
            return true;
        }
        else if(count==1){
            return false;
        }
        else if(count==2){
            swap(s2[a],s2[b]);
            if(s1==s2){
                return true;
            }
        }
        return false;
    }
};