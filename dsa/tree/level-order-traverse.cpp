#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};

void printLevelOrder(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;

    q.push(root);

    while(!q.empty()) {
        Node *node = q.front();

        cout << node->data << " ";
        q.pop();

        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
    }
}

Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(5);

    printLevelOrder(root);

    return 0;
}