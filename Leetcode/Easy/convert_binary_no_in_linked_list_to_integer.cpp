class Solution {
private:
    
    int getDecimalValue(ListNode* head, int& carry) {
        return head ? carry = 2 * carry + head->val, getDecimalValue(head->next, carry), carry : 0; 
    }
    
public:
    int getDecimalValue(ListNode* head) {
        int Res = 0;
        return getDecimalValue(head, Res);
    }
};