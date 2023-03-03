#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int mod, int n, int sum) {
    if (n > 0) {
        sum += mod;
        return sumOfDigits(n % 10, n / 10, sum);
    }
    return sum + mod;
}

int sum_of_digits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int n = 123;
    cout << sumOfDigits(0, n, 0) << endl;
    cout << sum_of_digits(n) << endl;
}