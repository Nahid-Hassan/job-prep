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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left, right;
        dfs(root1, left);
        dfs(root2, right);

        return left == right;
    }

    void dfs(TreeNode* root, vector<int>& leaves) {
        if (root == NULL) return;
        if (root->left == NULL and root->right == NULL) leaves.push_back(root->val);
        dfs(root->left, leaves);
        dfs(root->right, leaves);
    }
};