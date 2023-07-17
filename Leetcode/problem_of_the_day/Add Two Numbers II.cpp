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
    int addhelper(ListNode *l1, ListNode* l2, ListNode* result, int &len1, int &len2){
        if(!l1 || !l2) return 0;
        if(len1 == len2){
            if(l1->next)
                result->next = new ListNode(0);
            int sum = l1->val + l2->val + addhelper(l1->next, l2->next, result->next, --len1, --len2);
            result->val = sum % 10;
            return sum / 10;
        }else if(len1 > len2){
            if(l1->next)
                result->next = new ListNode(0);
            int sum = l1->val + addhelper(l1->next, l2, result->next, --len1, len2);
            result->val = sum % 10;
            return sum / 10;
        }else{
            if(l2->next)
                result->next = new ListNode(0);
            int sum = l2->val + addhelper(l1, l2->next, result->next, len1, --len2);
            result->val = sum % 10;
            return sum / 10;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        int len1 = 0, len2 = 0;
        ListNode * head1 = l1, *head2 = l2;
        while(l1){
            l1 = l1->next;
            ++ len1;
        }
        while(l2){
            l2 = l2->next;
            ++ len2;
        }
        ListNode *result = new ListNode(0);
        int carry = 0;
        ListNode * tmp = result;
        carry = addhelper(head1, head2, tmp, len1, len2);
        if(carry){
            ListNode * result_f = new ListNode(carry);
            result_f->next = result;
            return result_f;
        }else
            return result;
    }
};
