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
private: 
    bool isSame(TreeNode* p, TreeNode* q){
        if(!p || !q){
            if(!q && !p) return true;
            return false;
        }
        if (isSame(p->left,q->left) == false) return false;
        if (isSame(p->right,q->right) == false) return false;
        if(p->val == q->val){
            return true;
        }
        return false;
    }
public:    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSame(p,q);
    }
};
