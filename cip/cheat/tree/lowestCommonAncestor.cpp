#include <iostream>
#include <vector>
using namespace std;

// Definition of a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to find the LCA of two nodes in a binary tree
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // If root is null or equal to either p or q, return root
    if (root == NULL || root == p || root == q) {
        return root;
    }

    // Recursively search for p and q in the left and right subtrees
    TreeNode* left_lca = lowestCommonAncestor(root->left, p, q);
    TreeNode* right_lca = lowestCommonAncestor(root->right, p, q);

    // If both p and q are found in the left and right subtrees, the LCA is the root
    if (left_lca && right_lca) {
        return root;
    }

    // If only one of p and q is found, return that node
    if (left_lca) {
        return left_lca;
    } else {
        return right_lca;
    }
}

// Driver code to test the LCA algorithm
int main() {
    // Construct a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Find the LCA of two nodes in the tree
    TreeNode* p = root->left->left;
    TreeNode* q = root->left->right;
    TreeNode* lca = lowestCommonAncestor(root, p, q);

    // Print the value of the LCA
    cout << "LCA of " << p->val << " and " << q->val << " is " << lca->val << endl;

