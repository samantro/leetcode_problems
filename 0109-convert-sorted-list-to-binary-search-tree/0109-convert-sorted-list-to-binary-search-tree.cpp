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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     TreeNode* bst(vector<int>& nums,int s,int e)
    {
        if(s>e)
            return NULL;
        int mid=(s+e)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        if(s == e)
            return node;
        if(s<mid)
            node->left=bst(nums,s,mid);
        if(mid+1<e)
            node->right=bst(nums,mid+1,e);
        
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> nums;
        while(head)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        int n=nums.size();
        if(n==0)
            return NULL;
        return bst(nums,0,n);
    }
};