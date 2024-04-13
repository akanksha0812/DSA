class Solution {
  public:

    long long reversedBits(long long x) {
        // code here
        vector<int> t;
        while(x){
            int a=x%2;
            t.push_back(a);
            x=x/2;
        }
        
        int sizu=t.size();
        int rqsizuemore=32-sizu;
        
        for(int i=0;i<rqsizuemore;i++){
            t.push_back(0);
        }
        
        reverse(t.begin(),t.end());
        
        long long ans=0;
        for(int i=0;i<32;i++){
            if(t[i]==1){
                ans=ans+pow(2,i);
            }
        }
        
        return ans;
    }
};
