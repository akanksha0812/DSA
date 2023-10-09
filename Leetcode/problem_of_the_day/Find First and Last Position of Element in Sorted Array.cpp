class Solution {
public:
    int pos1(vector<int>& nums, int target){
        int left=0;
        int right=nums.size()-1;
        int pos=-1;
        
        while(left<=right){
            int mid=left+((right-left)/2);
            if(nums[mid]==target){
                pos=mid;
                right=mid-1;
            }else if(nums[mid]<=target){
                left=mid+1;
            }else {
                right=mid-1;
            }

        }
        return pos;
    }
    int pos2(vector<int>& nums, int target){
        int left=0;
        int right=nums.size()-1;
        int pos=-1;
        
        while(left<=right){
            int mid=left+((right-left)/2);
            if(nums[mid]==target){
                pos=mid;
                left=mid+1;
            }else if(nums[mid]<=target){
                left=mid+1;
            }else {
                right=mid-1;
            }

        }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
    int firstIndex=pos1(nums,target);
    int lastIndex=pos2(nums,target);
    vector<int>result;
    result.push_back(firstIndex);
    result.push_back(lastIndex);
    return result;
    }
    
};
