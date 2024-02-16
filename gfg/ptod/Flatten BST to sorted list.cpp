//User function Template for C++

/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    Node *flattenBST(Node *root)
    {
        // code here
        if(root==NULL)
        {
            return root;
        }
        flattenBST(root->left);
        cout<<root->data<<" ";
        flattenBST(root->right);
    }
};
