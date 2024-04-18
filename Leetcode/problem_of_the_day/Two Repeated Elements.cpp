//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int>ans;
        
        for(int i=0;i<n+2;i++)
        {
            int num = abs(arr[i]);
            if(arr[num]<0){
                ans.push_back(num);
            }
            arr[num]*=-1;
        }
        
        int f1=0,f2=0;
        
        for(int i=0;i<n+2;i++)
        {
            int num = abs(arr[i]);
            if(num==ans[0]) f1++;
            if(num==ans[1]) f2++;
            
            if(f1==2) return {ans[0],ans[1]};
            if(f2==2) return {ans[1],ans[0]};
        }
        return ans;
    
    }
};
