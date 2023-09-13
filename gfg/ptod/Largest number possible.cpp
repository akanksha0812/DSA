// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        int sum= N*9 ;


        if(S==0 && N>1) return "-1";
        if(S==0) return "0";
        if(S>sum) return "-1";


        string str="";


        while(str.size()<N)
        {
            str.push_back('9');
        }
    
        int j=N-1;
        while(sum!=S)
        {
            if(str[j]=='0') j--;
            str[j]--;
            sum--;
        }
        return str;
        
    }
};
