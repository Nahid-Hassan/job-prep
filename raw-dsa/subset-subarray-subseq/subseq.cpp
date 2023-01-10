#include <bits/stdc++.h>
using namespace std;

void print(int* ss, int idx) {
    for (int i = 0; i < idx; i++) cout << ss[i] << " ";
    cout << endl;
    return;
}

void printAllSS(int *arr, int n, int ci, int* ss, int csi) {
    if (ci >= n) {
        print(ss,csi);
        return;
    }
    ss[csi] = arr[ci];
    // include
    printAllSS(arr, n, ci + 1, ss, csi + 1);
  
    // exclude
    printAllSS(arr, n, ci + 1, ss, csi);
}


int main() {
    int n = 3;
    int arr[n] = {1, 2, 3};
    int ssa[3];

    printAllSS(arr, n, 0, ssa, 0);

    return 0;
}