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
    unordered_map<int, int> hash;
    // int findmx(TreeNode* root){
    //     if()
    // }
    void dfs(TreeNode* root){
        if(!root)   return;
        hash[root->val]++;
        dfs(root->right);
        dfs(root->left);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        dfs(root);

        int mx = 0;
        for (const auto& pair : hash) {
            mx = max(mx, pair.second);
        }
        
        for (auto pair : hash) {
            if (pair.second == mx)  ans.push_back(pair.first);
        }
        
        return ans;
    }
};