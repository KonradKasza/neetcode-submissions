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
    void inorder(TreeNode* t, vector<int> &res){
        if(t == nullptr) return;

        inorder(t->left,res);
        res.push_back(t->val);
        inorder(t->right,res);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;

        inorder(root,result);
        return result;
    }
};