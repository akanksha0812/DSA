/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
    public:
    // it will return the value of pre for next
    struct Node* swapPair(struct Node* ptr1, struct Node* ptr2, struct Node* pre){
        ptr1->next=ptr2->next;
        ptr2->next=ptr1;
        pre->next=ptr2;
        return ptr1;
    }
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head->next==NULL) return head;

        struct Node* ptr = head;
        head=head->next;
        
        //First swap
        ptr->next=head->next;
        head->next=ptr;
        struct Node* pre=ptr;
        
        // 1st transition
        if(ptr->next == NULL || ptr->next->next ==NULL) return head;
        ptr=ptr->next;

        while (ptr->next != NULL )
        {
            //swap
            pre = swapPair(ptr,ptr->next, pre);
            
            // transition
            if(ptr->next == NULL) return head;
            ptr=ptr->next;
        
        }

        return head;
    }
};
