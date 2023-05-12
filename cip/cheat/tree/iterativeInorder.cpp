#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void iterativeInorder(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while (curr != nullptr or !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;  // go left deeper 
        }
        // if all the left node is pushed...
        // top and pop left node
        curr = st.top();
        cout << curr->val << " ";
        st.pop();

        curr = curr->right;
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

    if (root) iterativeInorder(root);
    cout << endl;

    return 0;
}