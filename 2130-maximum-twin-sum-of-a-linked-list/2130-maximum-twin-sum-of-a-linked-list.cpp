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
        ListNode *s=head,*f=head;
        int m=0;
        vector<int> v;
        while(f){
            v.push_back(s->val);
            s=s->next;
            f=f->next->next;
        }
        int n=v.size();
        while(n--){
            m=max(m,v[n]+s->val);
            s=s->next;
        }
        return m;
    }
};