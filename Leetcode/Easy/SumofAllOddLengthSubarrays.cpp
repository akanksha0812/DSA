 int n=arr.size(),sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j+=2){
                for(int k=i;k<=j;k++){
                        sum=sum+arr[k];
                }
            }
        }
        return sum;