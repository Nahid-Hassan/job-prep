#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/**
 * @brief Binary Exponentiation
 * 
 * @param base 
 * @param power 
 * @return ll 
 * 
 * if power is odd:
 *      res *= base; power--;
 * else:
 *      base *= base; power /= 2;
 * 
 *  return res;
 */

ll power(ll base, ll power) {
    ll res = 1;

    while (power) {
        if (power % 2) {
            res *= base;
            power--;
        } else {
            base *= base;
            power /= 2;
        }
    }

    return res;
}

int main() {
    ll base = 2;
    ll n = 32;

    ll res = power(base, n);
    
    cout << res << endl;
}