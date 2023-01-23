class Solution {
public:
    ListNode* h;
    void reverse(ListNode* l1,ListNode* l2)
    {
        if(!l2)
            return;
        if(!l2->next)
            h=l2;
        reverse(l1->next,l2->next);
        l2->next=l1;
        l1->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
            return head;
        reverse(head,head->next);
        return h;
    }
};