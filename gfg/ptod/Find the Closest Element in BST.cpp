class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	void find(Node *root,vector<int>&v,int k){
        if(root==NULL)return;
        find(root->left,v,k);
        v.push_back(abs(root->data-k));
        find(root->right,v,k);
    }
    int minDiff(Node *root, int K)
    {
        vector<int>v;
        find(root,v,K);
        sort(v.begin(),v.end());
        return v[0];
        //Your code here
    }
};
