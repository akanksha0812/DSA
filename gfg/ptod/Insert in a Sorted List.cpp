/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node*curr = head ;
        Node*temp = new Node(data) ;
        if(curr->data>data){
            temp->next = curr ;
            return temp ;
        }
        while(curr->next){
            if((data>curr->data and data<curr->next->data) or (data==curr->data) ){
                temp->next = curr->next ;
                curr->next = temp ;
                return head ;
            }
            curr=curr->next ;
        }
        curr->next = temp ;
        return head ;
    }
};
