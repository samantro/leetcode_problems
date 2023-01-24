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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> m;
        int i=0;
        while(head){
            m.insert(head);
            if(m.find(head->next)!=m.end()) return *m.find(head->next);
            head=head->next;
        }
        return NULL;
    }
};