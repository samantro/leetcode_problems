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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *l1=head;
        while(l1){
            ListNode* l2=l1->next;
            while(l2 && l2->val!=0){
                l1->val+=l2->val;
                l2=l2->next;
            }
            l1->next=l2->next;
            l1=l1->next;
        }
        return head;
    }
};