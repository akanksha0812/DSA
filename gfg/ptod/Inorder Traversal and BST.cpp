//User function Template for C++

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
         int temp=arr[0];
        for(int i=1;i<N;i++){
            if(arr[i]>temp) temp=arr[i];
            else return 0;
        }
        return 1;
    }
};
