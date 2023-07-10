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
    int res=INT_MAX;
    void fun(TreeNode* root){
        if(!root) return;
        if(root->left){
            root->left->val=root->val+1;
            fun(root->left);
        }
        if(root->right){
            root->right->val=root->val+1;
            fun(root->right);
        }
    }
    void solve(TreeNode* root){
        if(!root) return;
        if(!root->left && !root->right) res=min(res,root->val);
        solve(root->left);
        solve(root->right);
    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        root->val=1;
        fun(root);
        solve(root);
        // if(res!=INT_MAX) return 0;
        return res;
    }
};