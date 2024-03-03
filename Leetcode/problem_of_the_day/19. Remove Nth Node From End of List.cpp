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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }

        ListNode* ptr=head;
        int delNodePrev = length - n - 1;

        while(delNodePrev && ptr){
            ptr = ptr->next;
            delNodePrev--;
        }
        if(length==1){
            delete head;
            return NULL;
        }

        ListNode* newHead = head;
        if(n==length){
            head=head->next;
            delete newHead;
            return head;
        }
        // ptr->next = ptr->next->next;
        ListNode* nodeDeleted=ptr->next;
        ptr->next=nodeDeleted->next;
        delete nodeDeleted;

        return head;
    }
};
