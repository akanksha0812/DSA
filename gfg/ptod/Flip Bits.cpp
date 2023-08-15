class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int maxcount=0;
        int count=0;
        int countone=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                countone++;
            }
            if(a[i]==0){
                count++;
            }
            else{
                count--;
            }
            if(count>0 && count>maxcount){
                maxcount=count;
            }
            else if(count<0){
                count=0;
            }
        }
        return maxcount+countone;
    }
};
