#include <bits/stdc++.h>
using namespace std;

void prefixSum(vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++) {
        arr[i] = arr[i-1] + arr[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 1, 4, 24, 5, 2};
    int low, high;

    // cin >> low >> high;
    prefixSum(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the range(low, high): ";
    cin >> low >> high;

    low == 0 ? cout << arr[high] : cout << arr[high] - arr[low-1] << endl << endl;
}