class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n = s.size();
        if(n<3){
            int num = stoi(s);
            if(num%8==0){
                return 1;
            }else{
                return -1;
            }
        }
        char a = s[n-1];
        char b = s[n-2];
        char c = s[n-3];
        
        
        int res = (c-'0')*100 + (b-'0')*10 +(a-'0')*1;
        
        
        if(res%8==0){
            return 1;
        }
        return -1;
    }
};
