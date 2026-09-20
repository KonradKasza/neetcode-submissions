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
    int returnMaxDepth(TreeNode* x, int maxLength){
        if(!x) return maxLength;

        int left =returnMaxDepth(x->left,maxLength+1);
        int right =returnMaxDepth(x->right,maxLength+1);
        return std::max(left,right);
    }

    int maxDepth(TreeNode* root) {
        return returnMaxDepth(root,0);
    }
};
