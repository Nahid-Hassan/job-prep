#include <iostream>

using namespace std;

// Define the structure of a node in the binary tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to merge two binary trees
TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    if (t1 == NULL) {
        return t2;
    }
    if (t2 == NULL) {
        return t1;
    }
    TreeNode* newNode = new TreeNode(t1->val + t2->val);
    newNode->left = mergeTrees(t1->left, t2->left);
    newNode->right = mergeTrees(t1->right, t2->right);
    return newNode;
}

// Function to print the binary tree in pre-order traversal
void printTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

// Driver function to test the implementation
int main() {
    // Create the first binary tree
    TreeNode* t1 = new TreeNode(1);
    t1->left = new TreeNode(3);
    t1->right = new TreeNode(2);
    t1->left->left = new TreeNode(5);

    // Create the second binary tree
    TreeNode* t2 = new TreeNode(2);
    t2->left = new TreeNode(1);
    t2->right = new TreeNode(3);
    t2->left->right = new TreeNode(4);
    t2->right->right = new TreeNode(7);

    // Merge the two binary trees
    TreeNode* mergedTree = mergeTrees(t1, t2);

    // Print the merged binary tree
    printTree(mergedTree);

    return 0;
}
