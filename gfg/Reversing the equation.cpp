class Solution
{
  public:
    string reverseEqn (string s)
        {
           stack<string>st;
            string number="";
           for(int i=0;i<s.length();i++){
               
            
                 
              if(s[i]=='+'|| s[i]=='-'||s[i]=='*'||s[i]=='/')
              {
                  string alpha="";
               alpha+=s[i];
               st.push(number);
               number="";
               st.push(alpha);
              }
               else{
                 
                   number+=s[i];
                
               }
           }
          st.push(number);
           string ans="";
         while(!st.empty()){
             ans+=st.top();
             st.pop();
         }  
         return ans;
        }
};
