#include <bits/stdc++.h>
using namespace std;

int nFactors(int n) {
    int nfactors = 1;
    for (int i = 2; i * i <= n; i++) {
        int count = 0;

        if (n % i == 0) {
            while (n % i == 0) {
                n /= 2;
                count++;
            }
        }
        nfactors *= (count + 1);
    }

    // for prime number
    if (n > 1) nfactors *= 2;

    return nfactors;
}

int main() {
    cout << nFactors(7) << endl;
}