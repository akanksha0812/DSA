class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       long pow = 1;

        int temp = N;

        N = R;

        R = temp;

        for(int i=1; i<=R; i++){

            pow *= N;

        }

      return pow; 
        
    }

};
