/*
    First questions: is number is only positive int or not??
*/

#include <bits/stdc++.h>
using namespace std;

void convertToBinary(int decimalNumber) {
    if (decimalNumber > 0) {
        convertToBinary(decimalNumber / 2);
        cout << decimalNumber % 2;
    }
    return;
}

int main() {
    int decimalNumber;

    cin >> decimalNumber;  // assume number is positive only

    convertToBinary(decimalNumber);
    cout << endl;

    // using c++ stl: bitset
    bitset<8> binaryNumber(decimalNumber);
    cout << binaryNumber << endl;

    cout << sizeof(3) << endl;
    cout << sizeof(30) << endl;
    cout << sizeof(120) << endl;
}