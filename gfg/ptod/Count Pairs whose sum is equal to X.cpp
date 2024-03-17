int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        vector<int>v1;
        vector<int>v2;
        int count=0;
        Node*temp1=head1;
        Node*temp2=head2;
        if(temp1==NULL) return 0;
        if(temp2==NULL) return 0;
      
       while(temp1!=NULL){
           v1.push_back(temp1->data);
           temp1=temp1->next;
       }
       while(temp2!=NULL){
           v2.push_back(temp2->data);
           temp2=temp2->next;
       }
       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       int leftptr=0;
       int rightptr=v2.size()-1;
       while((leftptr<v1.size()) && (rightptr>=0)){
       if(v1[leftptr]+v2[rightptr]==x){
           count++;
           rightptr--;
           leftptr++;
       }
       else if(v1[leftptr]+v2[rightptr]>x){
           rightptr--;
       }
      else{
          leftptr++;
      }
      
    }
    return count;
    }
