#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 50;
    vector<long> fib(n, 0);
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    } cout << endl;
}