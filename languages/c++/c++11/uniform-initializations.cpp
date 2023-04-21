// object initialization : uniform initialization
#include <bits/stdc++.h>
using namespace std;

int main() {
    // don't need assignment, different parenthesis...
    // use only braces

    // type var_name { .., .., .., .., .. };
    int values[]{1, 2, 3, 4, 5};

    for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        cout << values[i] << " ";
    }
    cout << endl;

    vector<int> v{1, 2, 3, 4, 5};
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // ==================
    int i;
    cout << i << endl;  // garbage
    int j{};
    cout << j << endl;  // initialize by zero
    int *k;             // undefined
    int *l{};           // initialize with nullptr
}