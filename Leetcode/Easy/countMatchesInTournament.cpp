 int sum,matches,advance,result=0;
        while(n>1){
            if(n%2!=0){
               matches=(n-1)/2;
               advance=n-matches;
               n=advance;
            }
            else{
                matches=n/2;
                advance=n-matches; 
                n=advance;
            }
            result=result+matches;
        }
        return result;