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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode *h1,*h2;
        if(l1->val<l2->val){
            h1=l1;
            l1=l1->next;
        }else{
            h1=l2;
            l2=l2->next;
        }
        h2=h1;
        while(l1 && l2){
            if(l1->val<l2->val){
                h1->next=l1;
                l1=l1->next;
            }else{
                h1->next=l2;
                l2=l2->next;
            }
            h1=h1->next;
        }
        while(l1){
            h1->next=l1;
            l1=l1->next;
            h1=h1->next;
        }
        while(l2){
            h1->next=l2;
            l2=l2->next;
            h1=h1->next;
        }
        return h2;
    }
};