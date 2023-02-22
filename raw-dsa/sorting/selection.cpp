#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &data) {
    for (auto it : data) cout << it << " ";
    cout << endl;
}

void selectionSort(vector<int> &data, int n) {
    // always find the minimum index and swap with i
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[minIndex] > data[j]) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

void printNewline() {
    cout << endl;
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    selectionSort(arr, arr.size());
    display(arr);

    printNewline();

    vector<int> arr1 = {1, 1, 2, 4, 3};
    selectionSort(arr1, arr1.size());
    display(arr1);


    return 0;
}