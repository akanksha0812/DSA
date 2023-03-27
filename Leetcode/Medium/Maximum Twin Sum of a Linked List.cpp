/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int n=0;
        vector<int>v;
        ListNode* temp=head;
        while( temp != 0)
        {
            v.push_back( temp->val );
            n++;
            temp=temp->next;
        }
        int ans = INT_MIN;
        for(int i=0 ; i < n/2 ; i++)
        {
            if( (v[i]+v[n-1-i]) > ans )
            {
                ans = v[i]+v[n-1-i];
            }
        }
        return ans;
    }
};