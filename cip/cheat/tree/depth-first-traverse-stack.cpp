#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int d): val(d), left(nullptr), right(nullptr) {}
};


// iterative traverse - preorder
void dftPreorder(TreeNode* root) {
    stack<TreeNode*> st;

    if(!root) return;
    st.push(root);

    while (!st.empty()) {
        TreeNode* node = st.top();
        cout << node->val << "->";
        st.pop();

        if (node->right) st.push(node->right);
        if (node->left) st.push(node->left);
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

    dftPreorder(root);
    cout << endl;

    return 0;
}