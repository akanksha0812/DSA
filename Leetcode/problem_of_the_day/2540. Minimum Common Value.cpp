class Solution {
public:
        int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>map;
        for(int i=0;i<nums1.size();i++) {
            map[nums1[i]]++;
        }
        int common_num = -1;
        for(int i=0;i<nums2.size();i++) {
            if(map[nums2[i]] >= 1) {
                common_num = nums2[i];
                break;
            }
        }
        return common_num;
    }
};
