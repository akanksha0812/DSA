class Solution {
public:
    struct comp{
        int elem;
        comp(int const &i):elem(i){}
 
        bool operator()(int const &i){
        return (i == elem);
        }
    };
    int semiOrderedPermutation(vector<int>& nums) {
        int ans=0;  
        int n=nums.size()-1;
        int sige=n+1;
        if(nums[0]==1 && nums[n]==sige){
            return 0;
        }
        else if(nums[0]==1 && nums[n]!=sige){
            int elem = sige;
            auto itr = find_if(nums.cbegin(), nums.cend(), comp(elem));
            int dis=distance(nums.cbegin(), itr);
            int a=n-dis;
            return a;
        }
        else if(nums[0]!=1 && nums[n]==sige){
            int elem = 1;
            auto itr = find_if(nums.cbegin(), nums.cend(), comp(elem));
            int dis=distance(nums.cbegin(), itr);
            return dis;
        }
        else{
            int elemf = 1;
            auto itrf = find_if(nums.cbegin(), nums.cend(), comp(elemf));
            int disf=distance(nums.cbegin(), itrf);
            int eleml = sige;
            auto itrl = find_if(nums.cbegin(), nums.cend(), comp(eleml));
            int disl=distance(nums.cbegin(), itrl);
            if(disf>disl){
                ans=ans+disf+((n-disl)-1);
            }
            else{
                ans=ans+disf+(n-disl);
            }
        }
        return ans;
    }
};
