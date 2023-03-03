#include <bits/stdc++.h>
using namespace std;

int prod(int n) {
    if (n%10 == n) return n;
    return (n%10) * prod(n / 10);
}

int main() {
    cout << prod(123) << endl;
}