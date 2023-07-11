class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		 int sr =  0, sc = 0 ,er= n-1,ec =m-1;
//          int k = 0;
         while(k>=0){             for(int j = sc ;j<=ec ;j++){
                 k--;
                 if(k==0)return a[sr][j];
             }
             sr++;
             for(int j= sr ;j<=er;j++){
                 k--;
                 if(k==0)return a[j][ec];
             }
             ec--;
             for(int j=ec;j>=sc;j--){
                  k--;
                 if(k==0)return a[er][j];
             }
             er--;
             for(int j= er;j>=sr;j--){
                   k--;
                 if(k==0)return a[j][sc];
             }
             sc++;
         }
         
         return -1;
    }
};
