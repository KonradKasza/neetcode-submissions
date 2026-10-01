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
    vector<int> res;    

    void traverse(TreeNode* curr){
        if(curr == nullptr) return;

        res.push_back(curr->val);
        traverse(curr->left);
        traverse(curr->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        res = {};
        traverse(root);
        return res;
    }
};