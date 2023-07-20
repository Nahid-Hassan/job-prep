#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 10;
    int b = 20;

    assert(sum(a,b) == 30);
    cout << "Pass all tests" << endl;
    return 0;
}