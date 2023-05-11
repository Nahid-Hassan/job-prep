# Tree Data Structures

![images](bt.png)

- **Root**: Node has no parent.
- **Leaf**: Node has no children.
- **Parent**: Node has children.

Being a **Binary Tree**:

- Have at most two nodes.
- Exactly one root.
- Exactly one path between root to any node. (Unique Path)

Create your first **Binary Tree**:

- Create **TreeNode**:

```c++
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int d): val(d), left(nullptr), right(nullptr) {}
};

```

**Traverse Tree**:

```c++
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << "->";
    preorder(root->left);
    preorder(root->right);
}
```

**Driver Program**:

```c++
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

    preorder(root);
}
```