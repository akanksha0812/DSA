class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n= (arr.size()/4);
        int count=1;
        int ans=0;

        for(int i=0;i<arr.size()-1;i++){

            if(arr[i]==arr[i+1]){
                count++;
                if(count>=n){
                    ans= arr[i];
                }
            }

            else{
                count=0;
            }
        }

        if(arr.size()==1){
            return arr[0];
        }

        return ans;
    }
};
