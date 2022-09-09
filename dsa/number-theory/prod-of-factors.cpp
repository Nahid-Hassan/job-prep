#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int numOfFactors(int n) {
    int factors = 1;

    for (int i = 2; i * i <= n; i++) {
        int counter = 0;
        
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                counter++;
            }
        }
        factors *= (counter + 1);
    }

    if (n > 1) factors *= 2;

    return factors;
}


ll binExp(ll base, ll power) {
    ll ans = 1;

    while (power) {
        if (power % 2) {
            ans *= base;
            power--;
        } else {
            base *= base;
            power /= 2;
        }
    }

    return ans;
}

ll prodOfFactors(ll n) {
    ll sf = numOfFactors(n);
    sf /= 2;

    ll prod = binExp(n, sf);

    return prod;
}

int main() {
    cout << prodOfFactors(84) << endl;  // 351298031616
}