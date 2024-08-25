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
    vector<int> ans;
    void dfs(TreeNode* root){
        if(!root)   return;
        
        dfs(root->left);
        dfs(root->right);
        // if(root->left){
        //     dfs(root->left);
        // }
        // else{
        //     dfs(root->right);
        // }
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)   return ans;
        dfs(root);
        return ans;
    }
};