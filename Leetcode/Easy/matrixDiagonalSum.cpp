int r=mat.size(),sum=0;
        for(int i=0;i<r;i++){
            sum+=mat[i][i];
            sum+=mat[i][r-i-1];
            if(i==r-i-1){
                sum-=mat[i][i];
            }
        }
      return sum;