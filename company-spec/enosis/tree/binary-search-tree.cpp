#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

void insertIntoBST(TreeNode* root, int key) {
    if (!root) {
        root = new TreeNode(key);
        return;
    }

    TreeNode* current = root;
    while (true) {
        if (current->data > key) {
            if (current->left == nullptr) {
                current->left = new TreeNode(key);
                break;
            } else {
                current = current->left;
            }
        } else {
            if (current->right == nullptr) {
                current->right = new TreeNode(key);
                break;
            } else {
                current = current->right;
            }
        }
    }
}

bool searchInBST(TreeNode* root, int key) {
    TreeNode *current = root;

    while (current != nullptr) {
        if (current->data == key) {
            return true;
        } else if (current->data > key) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return false;
}

void levelOrder(TreeNode *root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        cout << node->data << " ";
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}

void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(10);

    vector<int> nums = {20, 13, 24, 123, 2, 42};
    for (auto num : nums) {
        insertIntoBST(root, num);
    }

    nums.push_back(234);

    for (auto num : nums) {
        searchInBST(root, num) ? cout << "Found" << endl : cout << "Not found" << endl;
    }

    // levelOrder(root);
    preorder(root);
}