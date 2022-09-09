#include <bits/stdc++.h>
using namespace std;

void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    // store max value
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    // subtract 
    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main() {
    phi_1_to_n(100);
}