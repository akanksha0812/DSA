class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int>s1;
        int mid=ceil((sizeOfStack+1)/2) -1;
        while(sizeOfStack-1!=mid){
            s1.push(s.top());
            s.pop();
            sizeOfStack--;
        }
        s.pop();
        while(s1.size()!=0){
            s.push(s1.top());
            s1.pop();
        }
    }
};
