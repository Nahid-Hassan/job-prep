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
    int maxHeight(TreeNode* root) {
        if (root == NULL) return 0;
        int left = maxHeight(root->left);
        int right = maxHeight(root->right);
        
        return 1 + max(left, right);
    }
    
    int levelOrder(TreeNode* root, int maxDepth) {
        if (!root) return 0;    
        
        queue<TreeNode*> q;
        q.push(root);

        int sum = 0;
        while(!q.empty()) {
            int size = q.size();
            maxDepth--;
            
            while (size--) {
                TreeNode* node = q.front();
                q.pop();
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        
            if (maxDepth == 1) {
                while (!q.empty()) {
                    sum += q.front()->val;
                    q.pop();
                }
            }
        }
        return sum;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if (!root) return 0;
        if (!root->left and !root->right) return root->val;
        return levelOrder(root, maxHeight(root));
    }
};