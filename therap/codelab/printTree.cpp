// ?? binary tree?? or n-array tree??
// assume tree is a binary tree
// from scratch

#include <bits/stdc++.h>
using namespace std;

// create a treeNode
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): data(0), left(nullptr), right(nullptr) {} 
    TreeNode(int x): data(x), left(nullptr), right(nullptr) {} 
};


void printTree(TreeNode *root) {
    
}

int main() {
    TreeNode *left = nullptr, *right = nullptr, *root=nullptr;

    root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    printTree(root);

    return 0;
}

