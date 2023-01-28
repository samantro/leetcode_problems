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
    set<int> s;
    void fun(TreeNode* root){
        if(!root) return;
        fun(root->left);
        v.push_back(root->val);
        s.insert(root->val);
        fun(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        fun(root);
        return is_sorted(v.begin(),v.end())?s.size()==v.size():false;
    }
};