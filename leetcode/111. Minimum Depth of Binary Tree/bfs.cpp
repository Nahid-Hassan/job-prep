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
int depth;
class Solution {
public:
    int minDepth(TreeNode* root) {
        depth = 0;
        
        if (!root) return depth;
        queue<TreeNode*> q;
        
        q.push(root);
        while (!q.empty()) {
            depth++;
            
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                q.pop();
                if (!node->left && !node->right) return depth;
            }
        }
        // dummy line. never execute.
        return -1;
    }
};