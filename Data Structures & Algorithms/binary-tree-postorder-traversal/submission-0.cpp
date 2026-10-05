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
    vector<int> res;
public:
    void traverse(TreeNode* t){
        if(!t) return;
        traverse(t->left);
        traverse(t->right);
        res.push_back(t->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        res={};
        traverse(root);
        return res;
    }
};