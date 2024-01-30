class Solution {
public:
    unsigned long long int evalRPN(vector<string>& tokens) {
        stack<unsigned long long  int> st;
        for(int i = 0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                long long int  a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                if(tokens[i]=="+"){
                    st.push(b+a);
                }
                else if(tokens[i]=="-"){
                    st.push(b-a);
                }
                else if(tokens[i]=="*"){
                    st.push(b*a);
                }
                else{
                    st.push(b/a);
                }
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
