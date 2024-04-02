/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution
{
    public:
     int prevValue=-1;
    int minDiff=INT_MAX;
    public:
    void inorder(Node *root){
        if(root==NULL) return;
        inorder(root->left);
        
        if(prevValue!=-1){
            minDiff = min(minDiff, abs(prevValue - root->data));
        }
        
        prevValue=root->data;
     
        inorder(root->right);
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        inorder(root);
        return minDiff;
    }
};
