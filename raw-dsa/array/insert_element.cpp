#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10];

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    int pos; cin >> pos;
    int elem = 3;

    for (int i = elem; i >= pos; i--) {
        a[i+1] = a[i];
    }

    a[pos] = 5;

    for (int i = 0; i < elem + 1; i++) {
        cout << a[i] << " ";
    } cout << endl;

}