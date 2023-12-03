//User function Template for C++

/*Structure of the Node of the BST is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    void solver(Node*root,vector<int>&v1){
        if(root==NULL) return;
        
        v1.push_back(root->data);
        solver(root->left,v1);
        solver(root->right,v1);
        
    }
    int countPairs(Node* root1, Node* root2, int x)
    {  
        int cnt=0;
       vector<int>v1;
       vector<int>v2;
       map<int,int>m;
       solver(root1,v1);
       solver(root2,v2);
       for(int i=0;i<v1.size();i++) {
          m[v1[i]]++;
       }
       for(int j=0;j<v2.size();j++){
           if(m.find(x-v2[j])!=m.end()) cnt++;
       }
       return cnt;
    }


};
