#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    /**
     * @brief Construct a new List Node object
     * 
     * ListNode() : val(value), next(nullptr) {}
     */
    ListNode() : val(0), next(nullptr) {}    // create dummy node
    ListNode(int x) : val(x), next(nullptr) {}  // create node with specific value
    ListNode(int x, ListNode *next) : val(x), next(next) {} // node with link
};

int main() {
    ListNode* node = new ListNode(0);
    cout << node->val << endl;
}