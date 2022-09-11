         map<char,int>a;
        int count=1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(a.find(c) != a.end()){
                count++;
                a.clear();
                a[c]++;
            }
            else{
                a[c]++;
            }
        }
        return count;