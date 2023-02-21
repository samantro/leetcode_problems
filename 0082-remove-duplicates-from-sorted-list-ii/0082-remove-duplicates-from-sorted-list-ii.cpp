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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *l=head;
        while(l && l->next && l->val==l->next->val){
            while(l && l->next && l->val==l->next->val) l->next=l->next->next;
            l=l->next;
        }
        head=l;
        ListNode *l1=head;
        while(l){
            if(l && l->next && l->val!=l->next->val){
                l1=l;
            }
            else if(l && l->next && l->val==l->next->val){
                while(l && l->next && l->val==l->next->val) l->next=l->next->next;
                l1->next=l1->next->next;
            }
            l=l->next;
        }
        return head;
    }
};