class Solution{
    public:
    int c = 0; 
    int len(Node* head){
        while(head){
            c++;
            head = head->next;
        }
        return c;
    }
    Node* reverse(Node* node) {
        Node* prev= NULL;
        Node* curr = node;
        while(curr){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;  
        }
        
       return prev; 
    }
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        Node* temp = head;
        Node* temp1 = new Node(0);
        Node* temp2 = temp1;
        Node* temp3 = NULL;
        Node* temp4 = head;
        Node* temp5 = head;
        int c = len(head);
        int i = 0;
        while(i<(c+1)/2){
            i++;
            Node* r = new Node(temp->data);
            temp1->next = r;
            temp1 = r;
            temp5 = temp;
            temp = temp->next;
        }
        temp3 = reverse(temp);
        while(temp3){
            temp4->data = temp3->data - temp4->data;
            temp4 = temp4->next;
            temp3 = temp3->next;
        }
        temp2 = reverse(temp2->next);
        if(c%2!=0) temp5->next = temp2->next;
        else temp5->next = temp2;
        return head;
    }
};
