// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            if(!node){
                Node* newnode= new Node(data);
                return newnode;
            }
            
            if(node-> data > data){
                node->left= insert(node-> left, data);
            }
            else if(node-> data< data){
                node-> right = insert(node->right, data);
            }
            
            return node;
    }

};
