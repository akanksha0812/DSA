        string word;
        vector<string>a(10);
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                a[s[i]-48]=word+" ";
                word="";
                i++;
            }
            else{
                word=word+s[i];
            }}
            string result;
            for(int i=0;i<10;i++){
                result=result+a[i];
            }
            result.pop_back();
        return result;