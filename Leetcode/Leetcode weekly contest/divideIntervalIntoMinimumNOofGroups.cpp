int n=intervals.size();
        int c[n], d[n];
        for(int i=0;i<n;i++){
            c[i]=intervals[i][0];
            d[i]=intervals[i][1];
        }
        sort(c,c+n);
        sort(d,d+n);
        
        int it=1, answer=1,j=0,i=1;
        while(i<n && j<n){
            if(c[i]<=d[j]){
                it++;
                i++;
            }
            else{
                it--;
                j++;
            }
            answer=max(answer,it);
        }
        return answer;