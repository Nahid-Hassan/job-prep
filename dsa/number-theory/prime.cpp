#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9+7

typedef long long int ll;
typedef unsigned long long int ull;

bool prime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    for (int i = -2; i <= 50; i++) {
        if (prime(i)) {
            cout << i << " is a prime number." << endl;
        } else {
            cout << i << " is a composite number." << endl;
        }
    }

    return 0;
}