/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           long long unsigned int d = 0;

        Node *ptr = head;
//1101          7
        while (ptr != NULL)
        {
            // Left shift the current result by 1 and add the current bit
            d = (d << 1) + ptr->data;
            d = d % MOD;

            ptr = ptr->next;
        }

        return d;
        }
};

