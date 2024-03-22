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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        vector<int>v;
        int count=0;
        ListNode* start = head;
        while(start!=NULL){
            count++;
            start=start->next;

        }
        start = head;
        for(int i=0;i<count/2;i++){
            v.push_back(start->val);
            start=start->next;
        }
        if(count%2!=0){
            start=start->next;
        }
        for(int i=v.size()-1;i>=0;i--){
            if(start == NULL || start->val != v[i]) {
                return false;
            }
            start = start->next;
        }
        
        return true;
        
        
    }
};
