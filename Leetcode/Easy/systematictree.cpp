class Solution {
public:
    bool isMirror(TreeNode* a,TreeNode* b){
        if(!a && !b){
            return true;
        }
        if(a && !b || !a && b){
            return false;
        }
        if(a->val==b->val){
            return isMirror(a->left,b->right) && isMirror(a->right, b->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
      return isMirror(root->left,root->right);
    }
};