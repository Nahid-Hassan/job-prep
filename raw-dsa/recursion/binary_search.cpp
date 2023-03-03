#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &data, int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (target == data[mid])
        return mid;
    else if (target < data[mid]) {
        return binarySearch(data, low, mid - 1, target);
    } else {
        return binarySearch(data, mid + 1, high, target);
    }
}

int main() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binarySearch(data, 0, data.size() - 1, 8) << endl;
}