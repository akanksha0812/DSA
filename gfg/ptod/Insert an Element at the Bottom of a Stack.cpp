//User function Template for C++

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> ans;
        stack<int> temp;
        ans.push(x);
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        
        while(!temp.empty()){
            ans.push(temp.top());
            temp.pop();
        }
        
        return ans;
    }
};
