#include <bits/stdc++.h>
using namespace std;

void print(auto x) {
    cout << "Content: " << x << ", & ascii value: " << int(x) << endl;
}

int main() {
    bool b = 234;
    print(b);

    int i = b;
    print(i);

    i = 3.23;
    print(i);

    unsigned char c = -1;
    print(c);

    int d = -43;
    cout << d + d << endl;

    unsigned u1 = 42;
    unsigned u2 = 10;

    cout << u1 - u2 << endl;
    cout << u2 - u1 + 31 << endl;

    for (unsigned short u = 10; u >= 0; u--) {
        cout << u << endl;
    }
}