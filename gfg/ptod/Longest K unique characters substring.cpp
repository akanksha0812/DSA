class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
       int i =0;
       int j =0;
       int n = s.length();
       unordered_map<int , int> mp;
       int maxi = -1;
       
       while(j < n ){
           
           mp[s[j]]++;
           if (mp.size() > k){
               
               mp[s[i]]--;
               if(mp[s[i]] == 0){
                   mp.erase(s[i]);
               }
               
               i++;
           }
           
           if(mp.size() == k){
               maxi = max(maxi , j -i +1);
               
           }
           j++;
       }
       return maxi ;
       
    }
};
