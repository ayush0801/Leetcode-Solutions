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
    int makeNum(TreeNode* root, int temp){
        if(!root)   return 0;
        temp = (temp*10) + root->val;
        if(!root->left && !root->right)
            return temp;
        return makeNum(root->left, temp) + makeNum(root->right, temp);
    }
    int sumNumbers(TreeNode* root) {
        return makeNum(root, 0);
    }
};