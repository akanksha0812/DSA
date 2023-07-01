class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N>0){
            int bit=N%2;
            if(bit==1){
                count++;
            }
            N=N/2;
        }
        return count;
    }
};
