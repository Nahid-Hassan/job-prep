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
    void dfs(TreeNode* root, int tsum, vector<int> path, vector<vector<int>>& paths) {
        if (!root) return;
        if (!root->left && !root->right && tsum == root->val) {
            path.push_back(root->val);
            paths.push_back(path);
            return;
        }
        
        path.push_back(root->val);
        if (root->left) dfs(root->left, tsum - root->val, path, paths);
        if (root->right) dfs(root->right, tsum - root->val, path, paths);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        
        if (!root) return paths;
        dfs(root, targetSum, {}, paths);
        return paths;
    }
};