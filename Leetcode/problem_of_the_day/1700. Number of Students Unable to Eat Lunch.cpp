class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;

        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }

        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }

        int served=0;

        while(!q.empty() && served<q.size()){
            if(st.top()==q.front()){
                st.pop();
                q.pop();
                served=0;
            }
            else{
                q.push(q.front());
                q.pop();
                served++;
            }
        }

        return q.size();
    }
};
