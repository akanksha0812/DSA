class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;

        // while(i<j){
        //     if(s[i]==s[j]){
        //         int a=i+1,b=j-1;

        //         while(s[a]==s[i]){
        //             i=a;
        //             a++;
        //         }

        //         while(s[b]==s[j]){
        //             j=b;
        //             b--;
        //         }
        //     }
        // }

        // return j-i;

        while(i<j && s[i]==s[j]){
            char temp=s[i];

            while (i<=j && s[i]==temp) {
                i++;
            }
            
            while (j>=i && s[j]==temp) {
                j--;
            }
        }

        return max(0,j-i+1);
    }
};
