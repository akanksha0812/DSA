class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        //it basicly taking xor of all the elements
        //first being nX1 times second being n-1x2,n-2x3 ... 1xn
        int ans=0;
        for(int i=0;i<N;i++){
            
                //A[i] will come N-i*1+i times
                //so just check if anyone of them is odd then xor will A[i] or xor will be 0
               
            if((i+1)%2 && (N-i)%2){
                //since both are odd it will contribute to the ans
                ans^=A[i];
            }
        }
        return ans;
    }
};
