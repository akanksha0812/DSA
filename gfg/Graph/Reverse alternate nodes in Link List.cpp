/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    Node* reverse(Node* head){
        Node* prev = NULL, *curr = head;
        while(curr){
            Node* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
        if(!(odd -> next) || !(odd -> next -> next)) return;
        
        Node* prev = odd, *curr = odd -> next, *temp = odd -> next;
        
        while(prev -> next != NULL and curr -> next != NULL){
            prev -> next = curr -> next;
            if(prev -> next) prev = prev -> next;
            curr -> next = prev -> next;
            if(curr -> next) curr = curr -> next;
        }


        Node* x = reverse(temp);
        
        prev -> next = x;
    }
};
