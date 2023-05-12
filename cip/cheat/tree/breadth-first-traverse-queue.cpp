#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int d): val(d), left(nullptr), right(nullptr) {}
};

void bft(TreeNode* root) {
    if (!root) return;
    queue <TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        cout << node->val << " ";
        q.pop();

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}

int main() {
/*
                1
               / \
              2   3
             / \   \
            4   5   6
*/
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    bft(root);
    cout << endl;

    return 0;
}