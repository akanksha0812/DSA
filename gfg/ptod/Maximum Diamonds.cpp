class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int> q;
        long long diamond=0;
        for(int i=0;i<N;++i)
            q.push(A[i]);
            
        for(int i=0;i<K;i++){
            diamond+=q.top();
            q.push(q.top()/2);
            q.pop();
        }
        return diamond;
    }
};
