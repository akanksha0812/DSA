
class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>a;
        priority_queue<int>b;
        for(char ch : s){
            a[ch]++;
        }
        for(auto &it : a){
            b.push(it.second);
        }
        while(k>0){
            int c = b.top();
            b.pop();
            c--;
            b.push(c);
            k--;
        }
        int ans = 0;
        while(!b.empty()){
            int d = b.top();
            b.pop();
            d=d*d;
            ans+=d;
        }
        return ans;
    }
};
