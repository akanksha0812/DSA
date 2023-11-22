class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool match(struct Node* root1,struct Node* root2){
        if(root1!=nullptr&&root2!=nullptr){
            bool a = match(root1->left,root2->right);
            bool b = match(root1->right,root2->left);
            return (root1->data==root2->data&&a&&b)?true:false;
        }
        else if(root1==nullptr&&root2==nullptr)return true;
        else return false;
    }
    
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	   if(root==nullptr)return true;
	   return match(root->left,root->right);
    }
};
