/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
private:
    int count = 0; // Counter to keep track of visited nodes
    int kthLargestElement = -1; // To store the Kth largest element

    void reverseInOrderTraversal(Node* root, int K)
    {
        if (root == nullptr || count >= K)
            return;

        // Recursively visit the right subtree
        reverseInOrderTraversal(root->right, K);

        // Increment the count
        count++;

        // If count is equal to K, we have found the Kth largest element
        if (count == K)
        {
            kthLargestElement = root->data;
            return;
        }

        // Recursively visit the left subtree
        reverseInOrderTraversal(root->left, K);
    }

public:
    int kthLargest(Node* root, int K)
    {
        reverseInOrderTraversal(root, K);
        return kthLargestElement;
    }
};
