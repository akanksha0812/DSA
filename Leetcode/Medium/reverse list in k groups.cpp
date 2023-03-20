#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {

if(head==NULL){
    return NULL;
}

Node* next=NULL;
Node* curr=head;
Node* prev=NULL;
int count=0;

while(curr!=NULL && count<k){
    next=curr->next; //currect ko update krrhe h hum
    curr->next=prev; //
    prev=curr; //reverse krrhe h hum 2 node ko
    curr=next; //
    count++;  
}

if(next!=NULL){
    head->next=kReverse(next,k);
}

return prev;

}