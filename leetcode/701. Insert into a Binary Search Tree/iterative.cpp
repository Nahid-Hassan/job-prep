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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val);
        if (root == NULL) return node;
        
        TreeNode* parent = NULL, *current = root;
        while(current != NULL) {
            parent = current;
            
            if (current->val <= val) current = current->right;
            else current = current->left;
        }
        if (parent->val <= val) parent->right = node;
        else parent->left = node;
    
        return root;
    }
};