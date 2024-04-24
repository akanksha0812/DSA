class Solution {
public:
    int tribonacci(int n) {
       int arr[50];
       arr[0]=0;
       arr[1]=1;
       arr[2]=1;
       arr[3]=2;
       for (int i=4;i<=n;i++){
           arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
       }
       return arr[n];
    }
};
