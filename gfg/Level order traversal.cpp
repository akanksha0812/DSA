class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      if(root==NULL){
          return ans;
      }
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          Node* top = q.front();
          ans.push_back(top->data);
          q.pop();
      
      if(top->left != NULL){
          q.push(top->left);
      }
      if(top->right !=NULL){
          q.push(top->right);
      }
      }
      return ans;
    }
};
