class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
         Node *ptr = *head;
         int count=0;
         
         
         
         while(ptr!=NULL){
             count++;
             ptr=ptr->next;
         }
         
         vector<int>v(count);
         
         Node *p=*head;
         int i=0;
         while(p!=NULL){
             v[i]=p->data;
             p=p->next;
             i++;
         }
        
         std::sort(v.begin(),v.end());
         
         Node *res = *head;
         for(int j=0;j<count;j++){
             res->data = v[j];
             res=res->next;
         }
         
         
    }
};
