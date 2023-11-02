class Solution {
public:
    int count = 0;
    int averageOfSubtree(TreeNode* root) {
        average(root);
        return count;
    }
    int avg,sum,no_of_nodes;
    pair<int,int> average(TreeNode* root){
           if (root == NULL){
               return make_pair(0, 0);
           }
            pair<int,int> left = average(root->left);
            pair<int,int> right = average(root->right);
            sum = (left.first + right.first + root->val);
            no_of_nodes = (left.second + right.second + 1);
            avg = sum/(no_of_nodes);
            if (root->val == avg){
                count++;
           }
           return make_pair(sum, no_of_nodes);
     }
};