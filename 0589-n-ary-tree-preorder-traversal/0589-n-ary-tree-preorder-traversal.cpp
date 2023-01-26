/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> v;
    void fun(Node* root){
        if(!root) return;
        v.push_back(root->val);
        for(auto x:root->children) fun(x);
    }
    vector<int> preorder(Node* root) {
        fun(root);
        return v;
    }
};