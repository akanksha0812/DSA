//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLucky(int n) {
        // code here
        int i=2;
        while(n>=i){
            if(n%i==0)return false;
            n=n-(n/i);
            i++;
        }
        return true;
    }
};
