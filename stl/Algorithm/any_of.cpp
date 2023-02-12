#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {2, 4, 6, 8};
    any_of(arr, arr + 4, [](int k) { return k % 2; }) ? cout << "Even exists." << endl : cout << "Not exists" << endl;
}