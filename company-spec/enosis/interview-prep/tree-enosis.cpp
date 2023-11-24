#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

// Node class
class Node {
public:
    int id;
    string name;
    vector<Node*> children;
    Node(int id, string name) {
        this->id = id;
        this->name = name;
    }
};

// Top-down approach
Node* generate_tree_top_down(vector<Node>& nodes) {
    unordered_map<int, Node*> node_dict;
    for (auto& node : nodes) {
        node_dict[node.id] = &node;
    }
    for (auto& node : nodes) {
        if (node.id != 0) {  // Skip the root node
            Node* parent = node_dict[node.parentId];
            parent->children.push_back(&node);
        }
    }
    return node_dict[0];
}

// Bottom-up approach
Node* generate_tree_bottom_up(vector<Node>& nodes) {
    unordered_map<int, Node*> node_dict;
    for (auto& node : nodes) {
        node_dict[node.id] = &node;
    }
    for (auto& node : nodes) {
        if (node.parentId != -1) {  // Skip the leaf nodes
            Node* child = node_dict[node.id];
            Node* parent = node_dict[node.parentId];
            parent->children.push_back(child);
        }
    }
    return node_dict[nodes[0].id];
}

// Example usage
int main() {
    vector<Node> nodes = {
        Node(0, "root"),
        Node(1, "node1"),
        Node(2, "node2"),
        Node(3, "node3"),
        Node(4, "node4"),
        Node(5, "node5"),
        Node(6, "node6")
    };
    nodes[1].parentId = 0;
    nodes[2].parentId = 0;
    nodes[3].parentId = 1;
    nodes[4].parentId = 1;
    nodes[5].parentId = 2;
    nodes[6].parentId = 2;

    // Generate tree using top-down approach
    Node* root_top_down = generate_tree_top_down(nodes);

    // Generate tree using bottom-up approach
    Node* root_bottom_up = generate_tree_bottom_up(nodes);

    return 0;
}
