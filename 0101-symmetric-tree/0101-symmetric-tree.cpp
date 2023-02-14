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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool k,t;
        if(p==NULL && q==NULL)
            return true;
        if((p==NULL && (q->val==0 || q->val)) || ((p->val==0 || p->val) && q==NULL))
            return false;
        if(p->val==q->val)
        {
            t=isSameTree(p->left,q->right);
            k=isSameTree(p->right,q->left);
            return k&t;
        }
        else
            return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        bool k;
        k=isSameTree(root->left,root->right);
        return k;
    }
};