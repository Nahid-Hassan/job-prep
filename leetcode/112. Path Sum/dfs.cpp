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
bool flag;
class Solution {
public:
    void dfs(TreeNode* root, int sum, int tsum) {
        if (!root->left && !root->right) {
            if (tsum == sum) {
                flag = true;
                return;
            } else {
                return;
            }
        }
        
        if (root->left) dfs(root->left, sum + root->left->val, tsum);
        if (root->right) dfs(root->right, sum + root->right->val, tsum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        flag = false;
        if (!root) return false;
        dfs(root, root->val , targetSum);
        return flag;
    }
};