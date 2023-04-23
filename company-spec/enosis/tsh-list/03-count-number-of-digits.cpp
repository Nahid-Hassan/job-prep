#include <iostream>
using namespace std;

int numOfDigits(int x) {
    int count = 0;
    while (x) {
        count++;
        x /= 10;
    }

    return count;
}

int main() {
    int n = 12312;
    cout << numOfDigits(n) << endl;
}