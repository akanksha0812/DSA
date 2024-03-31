// User function Template for C++
/*
//Structure of the Node of the BST is as
struct Node {
    int key;
    Node* left, *right;
};


   'N' is the element
   'size' is the total element in BST
  */

class Solution {
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        int ans=-1;
        
        while(root){
            if(root->key<=n){
                ans=root->key;
                root=root->right;
            }
            else{
                root=root->left;
            }  
        }
        
        return ans;
    }
};
