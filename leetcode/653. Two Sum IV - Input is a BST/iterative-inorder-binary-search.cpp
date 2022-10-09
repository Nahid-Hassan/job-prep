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
    vector<int> item;
    void inorder(TreeNode* root) {
        if (root == NULL) return;
        if (root->left) inorder(root->left);
        item.push_back(root->val);
        if (root->right) inorder(root->right);
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        inorder(root);
        if (item.size() <= 1) return false;
        sort(item.begin(), item.end());
        for (int i = 0; i < item.size(); i++) {
            int temp = item[i];
            item[i] = 10e5;
            if (binary_search(item.begin(), item.end(), k - temp)) {
                return true;
            }
            item[i] = temp;
        }
        return false;
    }
};