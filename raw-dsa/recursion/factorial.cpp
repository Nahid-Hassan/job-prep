#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    // cause 0! = 1
    if (n <= 1) return 1;
    // n * f(n-1) or 5 * f(5-1) ....
    return n * fact (n - 1);
}

int main() {
    cout << fact(5) << endl;    
}