class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int s=0;
        for(int i=0;i<customers.size();++i){
            if(grumpy[i]==0){
                s+=customers[i];
            }
        }
        int i=0,j=0;
        int maxs=s;
        int csum=0;
        while(j<grumpy.size()){
            if(grumpy[j]==1){
                csum+=customers[j];
            }
            if(j-i+1==minutes){
                maxs=max(maxs,csum+s);
                if(grumpy[i]==1){
                csum-=customers[i];
                }
                i++;
            }
            j++;
        }

        return maxs;


    }
};
