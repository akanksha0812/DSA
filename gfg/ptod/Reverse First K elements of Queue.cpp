// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        while(k)
        {
            int num = q.front();
            st.push(num);
            q.pop();
            k--;
        }
        queue<int>Q;
        while(!st.empty())
        {
            int num = st.top();
            Q.push(num);
            st.pop();
        }
        while(q.size()!=0)
        {
            Q.push(q.front());
            q.pop();
        }
        return Q;
    }
};
