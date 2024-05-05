/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
class Solution{
  public:
    void solve(Node* root,int level,map<int,int>&mp){
        if(!root) return;
        if(mp.find(level)==mp.end()) mp[level]=root->data;
        else mp[level]=mp[level]+root->data;
        
        solve(root->left,level-1,mp);
        solve(root->right,level+1,mp);
    }
    vector <int> verticalSum(Node *root) {
        // add code here.
        map<int,int>mp;
        solve(root,0,mp);
        vector<int>ans;
        for(auto i:mp) ans.push_back(i.second);
        return ans;
    }
};
