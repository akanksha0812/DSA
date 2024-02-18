
class Solution
{
    public:
       
        int sumOfLeafNodes(Node *root ){
            
             int sum=0;
            while (root)  
            {  
                  
                if (root->left == NULL)  {  
                    
                    if(root->right==NULL)sum+=root->data;
                    root = root->right;  
                }  
                else
                {  
                    
                    Node* current = root->left;  
                    while (current->right && current->right != root)  
                        current = current->right;  
          
                    
                    if (current->right == root)  
                    {  
                        current->right = NULL;  
                        if(current->left==NULL)sum+=current->data;
                        root = root->right;  
                    }  
          
                    else
                    {  
                        current->right = root;  
                        root = root->left;  
                    }  
                }  
            }  
            return sum;
                     
        }
};
