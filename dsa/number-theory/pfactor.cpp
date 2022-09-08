#include <bits/stdc++.h>
using namespace std;

void printPrimeFactor(int n) {
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        if (n % i == 0) {
            while (n % i == 0) {
                count++;
                n /= i;
            }
            cout << i << " " << count << endl;
        }
    }

    if (n > 1) cout << n << " " << 1 << endl;
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        printPrimeFactor(n);
    }

    return 0;
}