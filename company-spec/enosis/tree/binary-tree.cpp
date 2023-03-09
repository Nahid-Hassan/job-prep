#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* node = new struct Node;

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void preorder(struct Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    struct Node* node = createNode(10);
    node->left = createNode(20);
    node->right = createNode(30);

    node->left->left = createNode(40);
    node->left->right = createNode(50);

    node->right->left = createNode(60);
    node->right->right = createNode(70);

    preorder(node);
}