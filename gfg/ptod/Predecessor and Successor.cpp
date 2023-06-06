class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* temp=root;
        while(temp){
            if(temp->key <key){
                pre=temp;
            }
            if(temp->key>=key){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
        temp=root;
        while(temp){
            if(temp->key >key){
                suc=temp;
            }
            if(temp->key<=key){
                temp=temp->right;
            }
            else{
                temp=temp->left;
            }
        }
    }
};
