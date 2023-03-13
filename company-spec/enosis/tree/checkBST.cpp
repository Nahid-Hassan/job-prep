#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

void insertToBST(TreeNode* root, int key) {
    TreeNode* current = root;
    while (true) {
        if (key > current->data) {
            if (current->right == nullptr) {
                current->right = new TreeNode(key);
                break;
            } else {
                current = current->right;
            }
        } else {
            if (current->left == nullptr) {
                current->left = new TreeNode(key);
                break;
            } else {
                current = current->left;
            }
        }
    }
}

void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}



bool isBST(TreeNode* root, TreeNode* left, TreeNode* right) {
    if (!root) return true;
    if (left and root->data <= left->data) return false;
    if (right and root->data >= right->data) return false;
    return isBST(root->left, left, root) and isBST(root->right, root, right);
}

int main() {
    TreeNode* root = new TreeNode(0);

    for (int i = 1; i <= 10; i++) {
        insertToBST(root, i);
    }

    preorder(root);
    cout << endl;
    cout << isBST(root, nullptr, nullptr) << endl;
}