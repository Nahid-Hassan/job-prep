#include <iostream>
#include <algorithm>

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

// Function to calculate the height of a binary tree
int calculateHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}

// Function to calculate the diameter of a binary tree
int calculateDiameter(Node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);
        int diameterThroughRoot = leftHeight + rightHeight + 1;
        int leftDiameter = calculateDiameter(root->left);
        int rightDiameter = calculateDiameter(root->right);
        return max(diameterThroughRoot, max(leftDiameter, rightDiameter));
    }
}

// Driver function to test the implementation
int main() {
    // Create the root node
    Node* root = createNode(1);

    // Insert some nodes into the binary tree
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Calculate and print the diameter of the binary tree
    cout << "The diameter of the binary tree is: " << calculateDiameter(root);

    return 0;
}
