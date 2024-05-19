class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int s=0,e=n-1;
        int result=arr[0];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(abs(arr[mid]-k)==abs(result-k)){
                result=max(result,arr[mid]);
            }
           else if(abs(arr[mid]-k)<abs(result-k)){
                result=arr[mid];
            }
            
            if(arr[mid]==k)return arr[mid];
            else if(arr[mid]<k)s=mid+1;
            else e=mid-1;
            
        }
        return result;
    } 
};
