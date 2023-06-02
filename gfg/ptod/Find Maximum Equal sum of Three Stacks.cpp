class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int a=0,b=0,c=0,i,j,k;
        for(i=0;i<N1;i++)a+=S1[i];
        for(i=0;i<N2;i++)b+=S2[i];
        for(i=0;i<N3;i++)c+=S3[i];
        i=0;j=0;k=0;
        while(i<N1)
        {
            while(j<N2 && b>a)
            {
                b-=S2[j];j++;
            }
            while(k<N3 && c>a)
            {
                c-=S3[k];k++;
            }
            if(a==b && b==c)
            {
                return a;
            }
            a-=S1[i];i++;
        }
        return  0;
    }
};
