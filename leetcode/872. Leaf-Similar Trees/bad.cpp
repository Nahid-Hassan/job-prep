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
    vector<int> left, right;
    
    void leftTree(TreeNode* root) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) left.push_back(root->val);
        leftTree(root->left);
        leftTree(root->right);
    }

    void rightTree(TreeNode* root) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) right.push_back(root->val);
        rightTree(root->left);
        rightTree(root->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leftTree(root1);
        rightTree(root2);
        
        for (auto it : left) cout << it << " ";
        cout << endl;
        for (auto it : right) cout << it << " ";
        cout << endl;
        

        return left == right;
    }
};