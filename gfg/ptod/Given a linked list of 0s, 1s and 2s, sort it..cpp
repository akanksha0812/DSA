class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
      if(head==NULL||head->next==NULL)
      return head;
      unordered_map<int,int>mp;
      for(Node *curr=head;curr!=NULL;curr=curr->next)
      {
          mp[curr->data]++;//frequency count
      }
      Node*curr=head;
      int i=0;
      while(i<=2)//changing data of linked list
      {
          for(int j=1;j<=mp[i];j++)
          {
              curr->data=i;
              curr=curr->next;
          }
          i++;
      }
        return head;
    }
};
