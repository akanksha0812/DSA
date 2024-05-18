/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int totalMoves = 0;
    int distributeCoinsHelper(TreeNode* root) {
        if (!root)
            return 0; 

        int leftExcess = distributeCoinsHelper(root->left);
        int rightExcess = distributeCoinsHelper(root->right);

        totalMoves += abs(leftExcess) + abs(rightExcess);

        return root->val + leftExcess + rightExcess - 1;
    }

    int distributeCoins(TreeNode* root) {
        distributeCoinsHelper(root);
        return totalMoves;
    }
};
