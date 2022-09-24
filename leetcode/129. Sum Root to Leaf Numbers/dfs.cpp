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
int total;
class Solution {
public:
    void dfs(TreeNode* root, int temp) {
        if (!root) return;
        if (!root->left && !root->right) {
            total += temp;
            return;
        }
        
        if (root->left) dfs(root->left, temp * 10 + root->left->val);
        if (root->right) dfs(root->right, temp * 10 + root->right->val);
    }
    
    int sumNumbers(TreeNode* root) {
        total = 0;
        if (!root) return total;
        
        dfs(root, root->val);
        return total;
    }
};