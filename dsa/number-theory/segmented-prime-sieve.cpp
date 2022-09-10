#include <bits/stdc++.h>
using namespace std;

vector <bool> p;
vector <int> primes;
vector <bool> seg_primes;

void sieve(int n) {
    p.assign(n+1, 1); // 1, 1, 1, 1, 1, 1
    p[0] = p[1] = 0; // 0, 0, 1, 1, 1, 1

    for (int i = 2; i <= n; i++) {
        if (p[i]) { // 2 3 5
            primes.push_back(i);
            for (int j = i * i; j <= n; j += 2) {
                p[j] = 0; 
            }
        }
    }
}

/***
 * left = 21; right = 30
 * sieve(sqrt(right)) => sieve(5)  => 2, 3, 5
 * 
 * seg_sieve[12] = [1, 1, ]
 * for prime in [2, 3, 5]
 *     m = (21 / 2) * 2 = 20 < left = 20 + prime
 *                        else not need to add prime
 * 
 *     for 22 to 30 false all 22 + 2, 22 + 2 + 2 ....
 */

void segmented_sieve(int left, int right) {
    sieve(sqrt(right));

    seg_primes.assign(right - left + 2, true);
    for (auto prime : primes) {
        int m = (left / prime) * prime;
        if (m < left) m += prime;

        // [0, 1, 2, 3, 4, ...]
        // [21,22,23,24,25, ...]
        if (prime >= left) 
        for (int i = m - left + 1; i <= right - left + 1; i+=prime) {
            // cout << i << " ";
            seg_primes[i-1] = false;
        }
        cout << endl;
    }

    for (int i = 0; i < right - left + 1; i++) {
        if (seg_primes[i]) {
            cout << i + left << " ";
        } 
    }
}

int main() {
    int left = 1, right = 31;
    segmented_sieve(left, right);

     
}   