//User function template for C++

/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/

class Solution{
  public:
    void traverse(Node* root, priority_queue<int>& pq){
        if(!root) return;
        
        pq.push(root->data);
        traverse(root->left, pq);
        traverse(root->right, pq);
    } 
    void putElements(Node* root, priority_queue<int>& pq){
        if(!root)
            return;
        
        putElements(root->right, pq);        // Right Subtree
        root->data = pq.top();             // Assigning Values
        pq.pop();
        putElements(root->left, pq);         // Left Subtree
    }
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        priority_queue<int>pq;
        traverse(root, pq);       // Preorder traversal to store the elements in sorted order
        putElements(root, pq);    // Perform Inorder traversal to assign correct values
        
        return root;
    }
};
