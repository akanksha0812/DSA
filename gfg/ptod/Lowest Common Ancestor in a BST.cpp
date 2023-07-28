class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            while(1){
                if(n1<root->data && n2<root->data){
                    root=root->left;
                }
                else if(n1>root->data && n2>root->data){
                    root=root->right;
                }else{
                    return root;
                }
            }
            
        }

};
