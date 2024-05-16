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
    bool evaluateTree(TreeNode* root) {
        if(!root->left and !root->right) return root->val;
        evaluateTree(root->left);
        evaluateTree(root->right);

        int val = root->val == 2 ? root->left->val | root->right->val : root->left->val & root->right->val;
        root->val = val;
        return root->val;
    }
};