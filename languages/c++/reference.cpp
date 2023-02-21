#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    a = 20;

    cout << a << endl;
    cout << b << endl;

    b = 30;

    cout << a << endl;
    cout << b << endl;
}