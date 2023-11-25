class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int i=0,j=n/2;
        int A[n];
        int k=0;
        while(i<n/2 || j<n){
            A[k++]=arr[i++];
            A[k++]=arr[j++];
        }
        
        for(int i=0;i<n;i++){
            arr[i]=A[i];
        }
	}
		 

};
