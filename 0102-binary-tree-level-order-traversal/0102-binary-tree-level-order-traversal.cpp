class Solution {
public:
    vector<vector<int>> v;
    void level(TreeNode* root,int l)
    {
        if(root==NULL)
            return;
        if(v.size()<=l)
            v.insert(v.begin()+l,vector<int>());
        v[l].push_back(root->val);
        level(root->left,l+1);
        level(root->right,l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        level(root,0);
        return v;
    }
};