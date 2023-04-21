#include <bits/stdc++.h>
using namespace std;

int main() {
    for (auto num : {1,2,3,4,5}) {
        cout << num << " ";
    } cout << endl;

    // avoid each time call copy constructor and destructor
    for (auto& num : {1,2,3,4,5}) {
        cout << num << " ";
    } cout << endl;

    int x = 10;

    for (auto &mul : {x, x * 2, x * 3, x * 4}) {
        cout << mul << " ";
    } cout << endl;
}