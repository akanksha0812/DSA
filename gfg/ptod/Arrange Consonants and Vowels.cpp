/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        Node* vowel=new Node(-1);
        Node* conso=new Node(-1);
        Node* temp=head;
        Node* vowelh=vowel;
        Node* consoh=conso;
        
        while(temp!=NULL){
            if(temp->data=='a' || temp->data=='e' || temp->data=='i' || temp->data=='o' || temp->data=='u'){
                vowel->next=new Node(temp->data);
                vowel=vowel->next;
            }
            else{
                conso->next=new Node(temp->data);
                conso=conso->next;
            }
            temp=temp->next;
        }
        
        vowel->next=consoh->next;
        return vowelh->next;
    }
};
