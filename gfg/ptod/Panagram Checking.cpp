//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        
        unordered_set<char>st;
        
        for(auto it: s){
            
            if(isalpha(it)){
                st.insert(tolower(it));
            }
            
        }
        
        if(st.size()<26){
            return false;
        }
        
        return true;
    }

};
