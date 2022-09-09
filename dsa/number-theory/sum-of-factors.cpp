#include <bits/stdc++.h>
using namespace std;

int sumOfFactors(int n) {
    int sum = 1;

    for (int i = 2; i * i <= n; i++) {
        int counter = 0;
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                counter++;
            }

            // (i ^ (counter + 1) - 1) / (i - 1)
            // cout << sum << " " << i << " " << counter << endl;
            sum *= (pow(i, counter + 1) - 1) / (i - 1);
        }
    }

    if (n > 1) sum *= (pow(n, 2) - 1) / (n - 1);

    return sum;
}

int main() {
    cout << sumOfFactors(84) << endl;
    cout << sumOfFactors(12) << endl;
    cout << sumOfFactors(7) << endl;

    return 0;
}