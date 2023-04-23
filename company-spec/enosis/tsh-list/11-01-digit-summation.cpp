#include <iostream>
using namespace std;

int dSum(int x) {
    int sum = 0;

    while (x) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main() {
    int x = 1324;
    cout << dSum(x) << endl;
}