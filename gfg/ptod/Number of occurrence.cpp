class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int binarySearch(int arr[], int n, int x,bool findStartIndex){
	    int inx=-1;
	    int start=0;
	    int end=n-1;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(x==arr[mid]){
	            inx=mid;
	            if(findStartIndex){
                end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
	        }
	        else if(x<arr[mid]){
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	    }
	    return inx;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int ans=0;
	    
	    int leftMostOccurrence=binarySearch(arr,n,x,true);
	    int rightMostOccurrence=binarySearch(arr,n,x,false);
	    
	    
	    
	    if(leftMostOccurrence==-1 && rightMostOccurrence==-1){
	        return ans;
	    }
	    
	    ans=rightMostOccurrence-leftMostOccurrence+1;
	    
	    return ans;
	}
};
