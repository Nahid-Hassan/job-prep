#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

void insert(TreeNode* root, int key) {
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node->left == nullptr) {
            node->left = new TreeNode(key);
            break;
        } else {
            q.push(node->left);
        }

        if (node->right == nullptr) {
            node->right = new TreeNode(key);
            break;
        } else {
            q.push(node->right);
        }
    }
}

// bfs
void levelOrder(TreeNode* root) {
    if (root == nullptr) return;

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

// dfs-1
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// dfs-2
void inorder(TreeNode* root) {
    if (!root) return;
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}

// dfs-3
void postorder(TreeNode* root) {
    if (!root) return;
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}

int main() {
    TreeNode* root = new TreeNode(1);
    for (int i = 2; i <= 10; i++) {
        insert(root, i);
    }

    // vector<int> data = {1, 2, 3, 0, 4, 0, 0, 4, 0, 0, 0, 5};

    cout << "Preorder: "; preorder(root);
    cout << endl;
    
    cout << "Inorder: "; inorder(root);
    cout << endl;
    
    cout << "Postorder: "; postorder(root);
    cout << endl;
    
    cout << "Level order: "; levelOrder(root);
    cout << endl;

    return 0;
}