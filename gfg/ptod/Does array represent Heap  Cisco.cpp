
class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        int k=0;
        for(int i=0;i<n-2;i++){
            
            if(arr[i]<arr[k+i+1] || arr[i]<arr[k+i+2]){
                return false;
            }
            k++;
        }
        
        return true;
        
    }
};
