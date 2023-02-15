#include <bits/stdc++.h>

int main() {
    int data;
    int sum = 0;

    // for unix system eof = ctrl+d and for windows ctrl-z
    while (std::cin >> data) {
        sum += data;
    }

    std::cout << data << std::endl;

    return 0;
}