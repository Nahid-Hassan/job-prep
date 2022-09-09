#include <bits/stdc++.h>
using namespace std;

void divisors(int n) {
    set<int> divs;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.insert(i);
            divs.insert(n/i);
        }
    }

    for (auto it : divs) {
        cout << it << " ";
    } cout << endl;
}

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n; 
        cin >> n;

        divisors(n);
    }
}