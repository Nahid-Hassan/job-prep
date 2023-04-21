#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Max(Int): " << numeric_limits<int>::max() << endl;
    cout << "Min(Int): " << numeric_limits<int>::min() << endl;

    cout << "Max(long): " << numeric_limits<long>::max() << endl;
    cout << "Min(long): " << numeric_limits<long>::min() << endl;

    cout << "Max(char): " << numeric_limits<char>::max() << endl;
    cout << "Min(char): " << numeric_limits<char>::min() << endl;
}