
class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    int s=0, i=a, j=0, p=0;
        begin:
        while(i<=b)
        {
            a++;
            while(i%2==0)
            {
                i/=2;
                s++;
            }
            if(i==1)
            {
                i=a;
                goto begin;
            }
            for(j=3;j<=sqrt(i);j+=2)
            {
                if(i%j==0)
                {
                    p++;
                    while(i%j==0)
                    {
                        i/=j;
                        s++;
                    }
                    p=0;
                }
            }
            if((p==0)&&(i!=1))
            {
                s++;
            }
            else
            {
                p=0;
            }
            i=a;
        }
        return s;


	}
};
