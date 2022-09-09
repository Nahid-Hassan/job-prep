#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int _lcm = (a * b) / gcd(a, b);
    return _lcm;
}

int main() {
    int a = 24;
    int b = 36;

    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;

    return 0;
}