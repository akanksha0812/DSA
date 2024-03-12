/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int, ListNode*> mp;
        ListNode *ans = new ListNode(0);
        ans->next = head;
        int sum = 0;
        bool flag = false;
        mp[0] = ans;
        while(head){
            sum+=head->val;
            if(mp.find(sum)!=mp.end()){
                mp[sum]->next=head->next;
                flag = true;
            } else {
                mp[sum] = head;
            }
            
            head = head->next;
        }
        if(flag){
                ans = removeZeroSumSublists(ans->next);
                return ans;
            }
        return ans->next;
    }
};
