

/* Link list Node 
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

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node *curr=head;
    int count=1;
    if(x==1){
        head=head->next;
    }
    while(curr->next!=NULL){
        if(count==x-1){
            curr->next=curr->next->next;
            break;
        }
        else{
            curr=curr->next;
            count++;
        }
    }
    return head;
}
