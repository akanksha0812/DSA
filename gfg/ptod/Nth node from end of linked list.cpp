class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *p1=head;
    	Node *p2=head;
    	
    	//placing 2nd pointer
    	int c=0;
    	for(int i=n;i>0&&p2!=NULL;i--){
    	    c++;
    	    p2=p2->next;
    	   
    	}
    	 if(p2==NULL&&c!=n)return -1;
    	//finding the ans value
    	while(p2!=NULL){
    	    p1=p1->next;
    	    p2=p2->next;
    	}
    	return p1->data;
    }
};
