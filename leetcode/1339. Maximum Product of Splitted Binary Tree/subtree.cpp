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
static int MOD = 1000000007;
class Solution {
public:
    long int total = 0;
    long int ans = 0;

    void dfs(TreeNode* root) {
        if (root == NULL) return;
        total += (int) root->val;
        dfs(root->left);
        dfs(root->right);
    }

    long int checkMax(TreeNode* root) {
        if (root == NULL) return 0L;
        long int l = checkMax(root->left);
        long int r = checkMax(root->right);

        ans = max(ans, (l + r + root->val) * (total - l - r - root->val));
        return l + r + root->val;        
    }

    int maxProduct(TreeNode* root) {
        dfs(root);

        cout << total << endl;

        checkMax(root);
        return (int) (ans % MOD);
    }

};