#include <iostream>
#include <ratio>

int main() {
    std::ratio<2, 3> r1;
    std::ratio<3, 4> r2;

    std::ratio_add<decltype(r1), decltype(r2)>::type r3;

    std::cout << r3.num << "/" << r3.den << std::endl;  // Output: 17/12

    std::ratio<25, 15> r4;
    std::cout << r4.num << " " << r4.den << std::endl;  // 5, 3

    return 0;
}
