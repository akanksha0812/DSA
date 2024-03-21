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
    ListNode* temp=nullptr;
    void rev(ListNode* prev,ListNode* head)
    {
        if(head->next==NULL)
        {
            temp=head;
            head->next=prev;
            return;
        } 
        rev(head,head->next);
        head->next=prev;       
    }

    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next)
            return head;
        rev(NULL,head);
        return temp;    
    }
};
