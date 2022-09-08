 int count=0;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            for(int j=0;j<s.size();j++){
                 if(allowed.find(s[j])==-1){
                count++;
                break;
            }
            }
           
        }
        return words.size()-count;