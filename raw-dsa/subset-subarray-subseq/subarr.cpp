#include <bits/stdc++.h>
using namespace std;

void print(int s, int e) {
    cout << "{";
    for (int i = s; i <= e; i++) cout << i << " ";
    cout << "\b}" << endl;
    return;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            print(arr[i], arr[j]);
        }
    }

    return 0;
}