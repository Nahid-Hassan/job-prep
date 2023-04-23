#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        root = new TreeNode(val);
        return root;
    }
    TreeNode* current = root;
    TreeNode* parent = nullptr;

    while (current != NULL) {
        parent = current;
        if (val < current->val) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    if (val < parent->val) {
        parent->left = new TreeNode(val);
    } else {
        parent->right = new TreeNode(val);
    }

    return nullptr;
}

void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 10);    
    insert(root, 20);
    insert(root, 5);

    inorder(root);
}