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
    int res = 0;
    int dfs(TreeNode* root) {
        if (root == NULL) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);

        left = max(0, left);
        right = max(0, right);

        res = max(res, left + right + root->val);
        return max(left, right) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        res = root->val;
        dfs(root);
        return res;
    }
};