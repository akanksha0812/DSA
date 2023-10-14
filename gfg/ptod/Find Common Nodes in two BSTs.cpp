

class Solution
{
private:
    unordered_map<int, int> mp;
    
    void traverse(Node* root)
    {
        if(!root)
            return ;
        
        mp[root->data]++;
        
        traverse(root->left);
        traverse(root->right);
    }
    
public: 
    vector <int> findCommon(Node *root1, Node *root2)
    {
        vector<int> vec;
        
        traverse(root1);
        traverse(root2);
        
        for(auto& it : mp)
            if(it.second == 2)
                vec.push_back(it.first);
                
        sort(vec.begin(), vec.end());
        
        return vec;
    }
};

