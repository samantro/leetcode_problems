class Solution {
public:
    ListNode* h;
    ListNode* reverse(ListNode* head){
        if(!head || !head->next){
            h=head;
            return h;
        }
        ListNode* l=reverse(head->next);
        l->next=head;
        head->next=NULL;
        return head;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* l=reverse(head);
        return h;
    }
};