#include <bits/stdc++.h>
using namespace std;

void il(vector<int> vals) {
    for (auto p = vals.begin(); p != vals.end(); p++) {
        cout << *p << endl;
    }
}

void il1(initializer_list<int> vals) {
    for (auto p = vals.begin(); p != vals.end(); p++) {
        cout << *p << endl;
    }
}

int main() {
    il({1,2,3,4,5});
    il1({1,2,3,4,43});
}