#include <iostream>

bool isPalindrome(int num) {
    if (num < 0) return false; // negative number cannot be palindrome number

    int temp = num;
    int reversed = 0;

    while (temp) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return num == reversed;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isPalindrome(num)) {
        std::cout << "The number is a palindrome." << std::endl;
    } else {
        std::cout << "The number is not a palindrome." << std::endl;
    }
    return 0;
}
