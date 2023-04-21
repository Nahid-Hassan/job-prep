#include <iostream>
#include <utility>
#include <vector>

/*
Overall, the move operation provides a way to optimize performance and reduce memory 
usage when working with large or resource-intensive objects.
*/

int main() {
    std::vector<int> v1 {1, 2, 3, 4};
    std::cout << "v1 size: " << v1.size() << std::endl;
    
    // Copy the vector to a new variable
    std::vector<int> v2 = v1;
    std::cout << "v1 size: " << v1.size() << std::endl;
    
    // Move the vector to a new variable
    std::vector<int> v3 = std::move(v1);
    
    std::cout << "v1 size: " << v1.size() << std::endl;
    std::cout << "v2 size: " << v2.size() << std::endl;
    std::cout << "v3 size: " << v3.size() << std::endl;
    
    return 0;
}
