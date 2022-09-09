#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            factors.push_back(i);
        }
    }

    if (n > 1) {
        factors.push_back(n);
    }

    return factors;
}

int phi1(int n) {
    vector<int> factors = primeFactors(n);

    int coprimes = n;

    for (auto it : factors) {
        coprimes *= (it - 1);
        coprimes /= it;
    }

    return coprimes;
}

// in one function
int phi_my(int n) {
    int coprimes = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            coprimes *= (i - 1);
            coprimes /= i;
        }
    }
    if (n > 1) {
        coprimes *= (n - 1);
        coprimes /= n;
    }

    return coprimes;
}

int phi_cp(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main() {
    for (int i = 1; i <= 50; i++) {
        cout << i << " " << phi(i) << endl;
    }
}