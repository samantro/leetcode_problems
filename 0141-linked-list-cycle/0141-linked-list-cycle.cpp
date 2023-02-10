/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool solve(ListNode *h1,ListNode *h2){
        if(!h1 || !h2 || !h2->next) return false;
        if(h1==h2) return true;
        return solve(h1->next,h2->next->next);
    }
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        return solve(head,head->next);
    }
};