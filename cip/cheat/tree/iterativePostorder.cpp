#include <iostream>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void postorderTraversal(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* prev = nullptr;
    
    do {
        while (root != nullptr) {
            s.push(root);
            root = root->left;
        }
        
        while (root == nullptr && !s.empty()) {
            root = s.top();
            
            if (root->right == nullptr || root->right == prev) {
                cout << root->val << " ";
                s.pop();
                prev = root;
                root = nullptr;
            } else {
                root = root->right;
            }
        }
    } while (!s.empty());
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;
    
    return 0;
}
