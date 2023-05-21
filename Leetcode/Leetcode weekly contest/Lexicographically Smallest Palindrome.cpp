class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.length();
        string palindrome=s;
        bool isPalindrome=true;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                isPalindrome=false;
                break;
            }
        }
        if(isPalindrome){
            return palindrome;
        }
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                char smallerChar=min(s[i], s[n-i-1]);
                palindrome[i]=smallerChar;
                palindrome[n-i-1]=smallerChar;
            }
        }
        return palindrome;
    }
};
