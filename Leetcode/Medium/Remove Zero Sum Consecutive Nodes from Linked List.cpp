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
        ListNode*tem=head,*prev=NULL;
        while(tem){
            ListNode*x=tem;
            int s=0,f=0;
            while(x){
                s+=x->val;
                if(s==0){
                    f=1;
                    break;
                }
                x=x->next;
            }
            if(f){
                if(prev){
                    prev->next=x->next;
                   // tem=prev;
                   //
                   // continue;
                }
                else{
                    head=x->next;
                }
                tem=head;
                prev=NULL;
                continue;

                
            }
           prev=tem;
           tem=tem->next;
        }
        return head;
        
    }
};
