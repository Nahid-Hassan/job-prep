#include <bits/stdc++.h>
using namespace std;

#define MX 1e6+10
typedef unsigned long long int ull;

vector<bool> is_prime(MX, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;

    for(ull i = 2; i * i <= MX; i++) {
        if(is_prime[i]) {
            for (ull j = i * i; j <= MX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    int tc;
    ull n;

    sieve();

    cin >> tc;
    while(tc--) {
        cin >> n;

        ull r = sqrt(n);

        if (is_prime[r] && r * r == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}