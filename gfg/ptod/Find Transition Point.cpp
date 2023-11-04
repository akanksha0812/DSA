class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int i=0,j=n-1;
        while(i<=j){
             if(arr[0]==1)
             return 0;
             if(arr[n-1]==0)
            return -1;
            if(arr[i]==1)
            return i;
            if(arr[j]==0){
                return j+1;
            }
            i++;
            j--;
        }
        if(arr[i]==1)
        return i;
        return -1;
    }
};
