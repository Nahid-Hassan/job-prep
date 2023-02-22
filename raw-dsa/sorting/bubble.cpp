#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &data) {
    for (auto it : data) cout << it << " ";
    cout << endl;
}

void bubbleSort(vector<int> &data, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            // compare between data[j] and data[j + 1] and make the decision
            if (data[j] > data[j+1]) {
                swap(data[j], data[j+1]);
                flag = true;
            }
        }
        display(data);
        // if flag is not effected then array is already sorted.
        // Hurray....
        if (flag == false) break; 
    }
}

void printNewline() {
    cout << endl;
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    bubbleSort(arr, arr.size());
    display(arr);

    printNewline();

    vector<int> arr1 = {1, 1, 2, 4, 3};
    bubbleSort(arr1, arr1.size());
    display(arr1);


    return 0;
}