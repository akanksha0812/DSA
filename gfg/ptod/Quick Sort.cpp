class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
         if(low<high)
        {
        int i=partition(arr, low, high);
        quickSort(arr, low, i-1);
        quickSort(arr, i+1, high);
        }
        return;
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[high];
       int i=low-1;
       for(int j=low; j<high; j++)
       {
           if(arr[j]<pivot)
           {
               i++;
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
       int temp=arr[i+1];
       arr[i+1]=pivot;
       arr[high]=temp;
       return i+1;
    }
};
