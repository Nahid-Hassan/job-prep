#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 12030;

    int rev(0);

    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
        // cout << rev << endl;
    }

    cout << rev << endl;
}