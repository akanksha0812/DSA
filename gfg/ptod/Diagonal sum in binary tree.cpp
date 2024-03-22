class Solution {
  public:
    void solve(Node *root,int x,int y,map<int,int> &mp){
        if(root==NULL) return;
        mp[y-x] = mp[y-x] + root->data;
        solve(root->left,x-1,y+1,mp);
        solve(root->right,x+1,y+1,mp);
    }
    vector<int> diagonalSum(Node* root) {
        map<int,int> mp;
        solve(root,0,0,mp);
        vector<int> ans;
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};

