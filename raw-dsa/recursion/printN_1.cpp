#include <bits/stdc++.h>
using namespace std;

void printRecur(int n) {
    cout << n << " ";
 
    if(n > 1) {
        printRecur(n - 1);
    } 
}

int main() {
    int n = 10;

    printRecur(n);
}