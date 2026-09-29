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

int maxLength = 0;
class Solution {
public:
    int result=0;

    int dfs(TreeNode* curr){
        if(curr == nullptr) return 0;

        int left = dfs(curr->left);
        int right = dfs(curr->right);
        
        result = std::max(result, left+right);
        return 1+ max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        result = 0;
        dfs(root);
        return result;
    }
};
