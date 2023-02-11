#include <bits/stdc++.h>
using namespace std;

// when reverse whole array
void _reverse(vector<int> &arr,int sz) {
    int mid = sz / 2;

    for (int i = 0; i < mid; i++) {
        swap(arr[i], arr[sz-i-1]);
    }
}

void _reverse_partial(vector<int> &arr, int start, int end) {
    int mid = (start + end) / 2;

    for (int i = start; i <= mid; i++) {
        
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int sz = arr.size();

    _reverse(arr, sz);

    for (auto a : arr) cout << a << " ";
    cout << endl;

    return 0;
}