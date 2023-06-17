class Solution{
    public:
    unordered_map<int,int>f;
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
         f[k]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        return f[k];  
    }
    
};
