class Solution {
public:
    int minimumSum(int n, int k) {
        int sum=0;
        set<int>ans;
        int i=0;
        int start=1;
        
        while(i<n){
            if(ans.find(k-start)==ans.end()){
                sum=sum+start;
                ans.insert(start);
                start++;
                i++;
            }else{
                start++;
            }
        }
        return sum;
    }
};
