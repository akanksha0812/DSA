/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   
class Solution
{
    public:
    //Function to check if two trees are identical.
    vector<int> inOrder(Node *root, vector<int> &v){
        if(root==NULL) return v;
        inOrder(root->left, v);
        v.push_back(root->data);
        inOrder(root->right, v);
        return v;
    }
    
    vector<int> postOrder(Node *root, vector<int> &v){
        if(root==NULL) return v;
        postOrder(root->left, v);
        postOrder(root->right, v);
        v.push_back(root->data);
        return v;
    }
    
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        vector<int> a, b, c, d;
        if((inOrder(r1, a)==inOrder(r2, b)) && (postOrder(r1, c)==postOrder(r2, d))) return true;
        return false;
    }
};
