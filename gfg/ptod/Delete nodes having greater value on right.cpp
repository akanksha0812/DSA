/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
         if(head==NULL|| head->next ==NULL){
        return head;
        
    }
    
        Node*curr = head;
        Node *temp = curr;
        while(curr->next!=NULL){
            
        
    
    if(curr->next->data > curr->data)
    {
        temp=curr;
        curr->data = curr->next->data;
        curr->next = curr->next->next;
        curr=head;
    }
    else{
        curr=curr->next;
    }
    }
    return head;
    }
    
};
   
