// https://www.youtube.com/watch?v=q_a6lpbKJdw

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> sol;
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        
        if (!root) return sol;
        q.push({root, {0, 0}});
        
        while(!q.empty()) {
            auto p = q.front(); 
            q.pop();
            
            TreeNode* node = p.first;
            int x = p.second.first, y = p.second.second;
            
            nodes[x][y].insert(node->val);
            
            if (node->left) {
                q.push({node->left, {x - 1, y + 1}});
            } 
            
            if (node->right) {
                q.push({node->right, {x + 1, y + 1}});
            }
        }
        
        for (auto p : nodes) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            sol.push_back(col);
        }
        
        return sol;
    }
};

int main(void) {

    return 0;
}