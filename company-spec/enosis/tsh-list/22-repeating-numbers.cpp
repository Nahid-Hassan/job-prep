#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void printRepeatingElements(int arr[], int size) {
    unordered_map<int, int> mp;

    for (int i = 0; i < size; i++) {
        mp[arr[i]]++;
    }

    for (auto it : mp) {
        if (it.second > 1) {
            cout << it.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 5, 6, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printRepeatingElements(arr, size);
    return 0;
}
