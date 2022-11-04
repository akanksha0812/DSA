class NestedIterator {
    queue<int> q;
public:
    void process(vector<NestedInteger> &nestedList) {
        for (auto v : nestedList) {
            if (v.isInteger()) {
                q.push(v.getInteger());
            } else {
                process(v.getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        process(nestedList);
    }
    
    int next() {
        int ret = q.front();
        q.pop();
        return ret;
    }
    
    bool hasNext() {
        return !q.empty();
    }
};