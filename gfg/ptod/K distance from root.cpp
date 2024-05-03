/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    void solve(vector<int> &ans, struct Node *root, int k){
        if(k==0){
            ans.push_back(root->data);
        }
        
        if(root->left){
            solve(ans,root->left,k-1);
        }
        
        if(root->right){
            solve(ans,root->right,k-1);
        }
    }
    
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int>ans;
      
      solve(ans,root,k);
      
      return ans;
    }
};
