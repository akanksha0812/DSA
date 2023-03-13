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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        sol(root1, a);
        sol(root2, a);
        sort(a.begin(),a.end());
        return a;
        
    }
    void sol(TreeNode* root, vector<int>& a){
        if(root==NULL){
            return;
        }
        sol(root->left,a);
        a.push_back(root->val);
        sol(root->right,a);
    }
};