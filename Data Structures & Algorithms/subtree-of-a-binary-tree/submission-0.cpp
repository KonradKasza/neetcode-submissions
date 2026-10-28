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
    bool isInRoot(TreeNode* root, TreeNode* subRoot){
        if(!root || !subRoot) return root == subRoot;

        bool result = false;
        if(root->val != subRoot->val){
            return false;
        }
        //xnor
        bool isLeft = bool(root->left) == bool(subRoot->left);
        bool isRight = bool(root->right) == bool(subRoot->right);
        if(!isLeft || !isRight) return false;

        if(!root->left && !root->right) return true;

        if(isLeft && root->left) result = isInRoot(root->left,subRoot->left);
        if(root->left && !result) return result; 
        if(isRight && root->right) result = isInRoot(root->right,subRoot->right);
        return result;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return !subRoot;
        if(isInRoot(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};