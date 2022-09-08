#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    struct TreeNode* left, *right;
}

vector<vector<int>> levelOrderTraverse(TreeNode* root) {
    vector<vector<int>> ans;

    if (!root) return NULL;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        int size = q.size();
        vector<int> vec;

        while(size--) {
            TreeNode* node = q.front();
            q.pop();

            cout << node->data << " ";

            vec.push_back(node->data);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        ans.push_back(vec);
    }

    return ans;
}

TreeNode* newNode(int data) {
    TreeNode *temp = new TreeNode;
    temp->data = data;
    temp->left = temp->right = NULL;
    
    return temp;
}

int main() {
    TreeNode *root  = newNode(1);
    root->left  = newNode(2);
    root->right  = newNode(3);

    vector<vector<int>> out = levelOrderTraverse(root);
}