int l=s.length();
        if(l==1)
            return s;
        for(int i=1;i<l;i=i+2)
        {
           s[i]=s[i-1]+s[i]-'0';
        }
        return s;