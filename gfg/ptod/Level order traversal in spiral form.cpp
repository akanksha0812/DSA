vector<int> findSpiral(Node *root)
{
    //Your code here
     bool flag=true;
    queue<Node* > q;
    vector<int> output;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> t;
        for(int i=0; i<n; i++){
            Node* temp=q.front();
            q.pop();
            t.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            
        }
        if(!flag){
            for(int i=0; i<t.size(); i++){
                output.push_back(t[i]);
            }
            flag=true;
        }
        else{
            // right to left -----
            for(int i=t.size()-1; i>=0; i--){
                output.push_back(t[i]);
            }
            flag=false;
        }
    }
    return output;
}
