class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        unordered_map<int, bool> cnt;
        int res = 0;

        for(auto c:s) freq[c - 'a']++; 

        for(auto f:freq) {
            if(f != 0) {
                if(!cnt[f]){
                    cnt[f] = true;
                }
                else{
                    int index = f;
                    while(cnt[index]){
                        res++;
                        index--;
                    }
                    if(index) cnt[index] = true;
                }
            }
                
        }

        return res;

    }
};
