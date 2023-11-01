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
        // vector<pair<int,int>> freq;
        vector<int> ans;
        dfs(root);
        
        // for(auto x: hash){
        //     auto p = make_pair(x.second, x.first);
        //     freq.push_back(p);
        // }
        
        // sort(freq.rbegin(), freq.rend());
        int mx = 0;
        for (const auto& pair : hash) {
            mx = max(mx, pair.second);
        }
        for (auto pair : hash) {
            if (pair.second == mx) {
                ans.push_back(pair.first);
            }
        }
        
        // for(int i=0; i<freq.size(); i++){
        //     if(freq[i].first==mx)   ans.push_back(freq[i].second);
        //     else break;
        // }
        
        return ans;
    }
};