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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr=list1;
        ListNode* aa=list1;
        ListNode* bb=list1;
        int counta=0, countb=0;
        while(curr!=NULL){
            if(counta==a-1){
                aa=curr;
            }
            if(countb==b){
                bb=curr;
                break;
            }
            curr=curr->next;
            counta++;
            countb++;
        }
        aa->next=list2;

        ListNode* temp=list2;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=bb->next;
        
        return list1;
    }
};
