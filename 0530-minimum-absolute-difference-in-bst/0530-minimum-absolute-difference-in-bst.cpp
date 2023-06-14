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
    int rightMax(TreeNode* root){
        if(!root) return 0;
        if(!root->left) return root->val;
        return rightMax(root->left);
    }
    
    int leftMax(TreeNode* root){
        if(!root) return 0;
        if(!root->right) return root->val;
        return leftMax(root->right);
    }
    
    void fun(TreeNode* root){
        if(!root) return;
        if(root->left){
            res=min(res,root->val-leftMax(root->left));
            fun(root->left);
        }
        if(root->right){
            res=min(res,abs(rightMax(root->right)-root->val));
            fun(root->right);
        }
    }
    
    int getMinimumDifference(TreeNode* root) {
        fun(root);
        return res;
    }
};