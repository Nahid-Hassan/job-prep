#include <iostream>
#include <vector>
#include <map>
#include <string>

struct Node {
    int id;
    std::string name;
    int parent;
};

std::vector<Node> constructForest(const std::vector<Node>& nodes) {
    std::map<int, std::vector<Node> > nodeMap;

    // Create map with parent as key and node as value
    for (const auto& node : nodes) {
        nodeMap[node.parent].push_back(node);
    }

    // Traverse through the map and add children to each node
    for (auto& entry : nodeMap) {
        int parent = entry.first;
        std::vector<Node>& children = entry.second;
        for (auto& child : children) {
            std::vector<Node>& childNodes = nodeMap[child.id];
            child = childNodes[0]; // Get full node information from map
        }
    }

    // Return roots of each tree in the forest
    return nodeMap[-1];
}

int main() {
    std::vector<Node> nodes = {
        {1, "Node1", -1},
        {2, "Node2", -1},
        {3, "Node3", 1},
        {4, "Node4", 3},
        {5, "Node5", 4},
        {6, "Node6", 2},
        {7, "Node7", 6}
    };

    std::vector<Node> roots = constructForest(nodes);

    for (const auto& root : roots) {
        std::cout << "Tree Root: " << root.name << std::endl;
        std::vector<Node>& children = nodeMap[root.id];
        for (const auto& child : children) {
            std::cout << "  Child: " << child.name << std::endl;
        }
    }

    return 0;
}
