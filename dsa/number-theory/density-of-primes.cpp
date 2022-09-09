#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10e5;

    // method = n / ln(n)
    int density = n / log(n);   // log() in c++ is natural logarithm. e-based.

    cout << density << endl;
}