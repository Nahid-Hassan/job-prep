#include <iostream>

void decimalToBinary(int decimalNumber) {
    unsigned int mask = 1 << (sizeof(decimalNumber) * 8 - 1);

    std::cout << mask << std::endl;

    for (int i = 0; i < sizeof(decimalNumber) * 8; ++i) {
        if (decimalNumber & mask)
            std::cout << "1";
        else
            std::cout << "0";

        decimalNumber <<= 1;
    }
}

int main() {
    int decimalNumber = -5;

    std::cout << "Binary representation of " << decimalNumber << ": ";
    decimalToBinary(decimalNumber);
    std::cout << std::endl;

    return 0;
}
