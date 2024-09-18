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
    void inOrder(TreeNode* root) {
        if (!root)
            return;
        inOrder(root->left);
        curr->right = new TreeNode(root->val);
        curr = curr->right;
        inOrder(root->right);
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        new_head = new TreeNode();
        curr = new_head;
        inOrder(root);
        return new_head->right;
    }
private:
    TreeNode* new_head;
    TreeNode* curr;
};
