class Solution {
public:
    void traversePostorder(Node* currentNode, vector<int>& postorderList) {
        if (!currentNode)   return;

        for (Node* childNode : currentNode->children) {
            traversePostorder(childNode, postorderList);
        }

        postorderList.push_back(currentNode->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        traversePostorder(root, result);
        return result;
    }
};