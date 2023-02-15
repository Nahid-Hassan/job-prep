#include <iostream>  // header, here #include is a directive

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    // std::cout << "/*";
    // std::cout << "*/";
    // std::cout << /* "*/ " */;
    //     std::cout
    //           << /*  "*/ " /* " /*"  */;

    return 0;
}
// to see status message or return value
// echo $?
