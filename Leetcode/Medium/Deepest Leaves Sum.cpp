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
    void dfs(TreeNode* root, int n, int &deepestsum, int &h){
        if(!root){
            return;
        }
        if(n==h){
            deepestsum+=root->val;
        }
        if(n>h){
            deepestsum = root->val;
            h = n;
        }
        dfs(root->left,n+1,deepestsum,h);
        dfs(root-> right,n+1,deepestsum,h);
    }
    int deepestLeavesSum(TreeNode* root) {
        int deepestsum(0), h(1);
        dfs(root, 1, deepestsum, h);
        return deepestsum;
    }
};
