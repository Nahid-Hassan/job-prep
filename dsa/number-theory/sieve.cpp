#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int n = 1e6+7;   // 1000007
vector <bool> is_prime(n+1, true); // additional 1 for boundary checking.

void sieve() {
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) 
                is_prime[j] = false;
        }
    }
}

int main() {
    sieve();

    for(int i = 1; i <= 100; i++) {
        if (is_prime[i]) {
            cout << i << endl;
        }
    }
}