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
    int deepestLeavesSum(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        int ans = 0;
        if (!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            ans = 0;
            
            while (size--) {
                TreeNode* node = q.front();
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                ans += q.front()->val;
                q.pop();
            }
        }
        return ans;
    }
};
