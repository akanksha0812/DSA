

/* Function to print corner node at each level */

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printCorner(Node *root)
{

// Your code goes here
queue<Node *>q;

q.push(root);

int size=1,t=1;

while(!q.empty())

{

    Node *top;

    top =q.front();

    

    if(size==0)

    {

        size=q.size();

        t=q.size();

    }

    if (size==1 || size== t)

    {

        cout<<q.front()->data<<" ";

    }

    size--;

    if(top->left!=NULL)q.push(top->left);

    if(top->right!=NULL)q.push(top->right);

    q.pop();

}

}
