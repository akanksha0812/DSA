class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> ans;
            
            string temp="";
            int n= pattern.size();
            
            for(int i=0;i<=text.size()-n;i++){
                temp= text.substr(i,n);
                if(temp==pattern){
                    ans.push_back(i+1);
                }
            }
            
            return ans;
        }
     
};
