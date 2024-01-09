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
public:vector<int> a, b;
    void makea(TreeNode* p){
        if(p->left) makea(p->left);
        if(p->right)    makea(p->right);
        if(!p->left and !p->right)
            a.push_back(p->val);
    }
    void makeb(TreeNode* q){
        if(q->left) makeb(q->left);
        if(q->right)    makeb(q->right);
        if(!q->left and !q->right)
            b.push_back(q->val);
    }
    bool leafSimilar(TreeNode* p, TreeNode* q) {
        makea(p);
        makeb(q);
        return a==b;
    }
};