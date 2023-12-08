
class Solution
{
    public:
    int minNumber(int arr[],int N)
    {
        int sum=0;
        
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        
        
        int totalSum=sum;
        
        if(totalSum==1){
            return 1;
        }
        
        while(true){
            if(prime(sum)){
                break;
            }
            
            sum++;
        }
        
        return sum-totalSum;
        
    }
    
    bool prime(int a){
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                return false;
            }
        }
        
        return true;
    }
};
