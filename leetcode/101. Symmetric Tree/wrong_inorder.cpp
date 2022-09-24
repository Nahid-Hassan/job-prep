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
    void inorder(TreeNode* root, vector<int>& sub) {
        if (!root) return;
        if (root->left) inorder(root->left, sub);
        else if (!root->right ) sub.push_back(NULL);
        sub.push_back(root->val);
        if (root->right) inorder(root->right, sub);
        else if (!root->left) sub.push_back(NULL);
    }
    
    bool isSymmetric(TreeNode* root) {
        vector<int> left;
        vector<int> right;
        
        if (!root) return true;
        if (root->left) inorder(root->left, left);
        if (root->right) inorder(root->right, right);
        
        reverse(left.begin(), left.end());
        return left == right;
    }
};

// [5,4,1,null,1,null,4,2,null,2,null] -- Wrong output in this test case.