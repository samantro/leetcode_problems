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
    vector<int> v;
    void fun(TreeNode* root){
        if(!root) return;
        v.push_back(root->val);
        fun(root->left);
        fun(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        fun(root);
        return v;
    }
};