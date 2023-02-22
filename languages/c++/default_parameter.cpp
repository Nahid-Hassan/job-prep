#include <iostream>
using namespace std;

int IdentifyFunction(int a = 10) {  // with default parameter
    return (a);
}

int Add(int a = 10, int b = 20) {
    return (a + b);
}

int main() {
    int a = 5, y;

    y = IdentifyFunction(a);
    cout << y << endl;  // 5

    y = IdentifyFunction();
    cout << y << endl;  // 10

    int x = 5, z;

    z = Add(x, y);
    cout << z << endl;
    z = Add(x);
    cout << z << endl;
    z = Add();
    cout << z << endl;
}