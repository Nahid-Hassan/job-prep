#include <iostream>

using namespace std;

// Define the structure of a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a new node into the binary tree
Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        root = createNode(data);
    } else if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to print the binary tree in order
void printInOrder(Node* root) {
    if (root != nullptr) {
        printInOrder(root->left);
        cout << root->data << " ";
        printInOrder(root->right);
    }
}

// Driver function to test the implementation
int main() {
    // Create the root node
    Node* root = createNode(10);

    // Insert some nodes into the binary tree
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 3);
    insertNode(root, 7);

    // Print the binary tree in order
    printInOrder(root);

    return 0;
}
