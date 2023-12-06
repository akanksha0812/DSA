class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int count=0;
        for(int i=L+1;i<R;++i){
            count += countDigit(i , X);
        }
        return count;
    }
    
    private:
    int countDigit(int i, int X){
        int cnt=0;
        string s=to_string(i);
        
        for(char c:s){
            if(c-'0'== X){
                ++cnt;
            }
        }
        return cnt;
    }
    
};
