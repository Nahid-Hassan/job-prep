#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int h) {
    int n1 = mid - l + 1;
    int n2 = h - mid;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++) {
        M[i] = arr[mid + 1 + i];
    }

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int h) {
    if (l < h) {
        int mid = l + ((h - l) >> 2);
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

int main() {
    vector<int> arr = {3, 1, 4, 5, 61, 5, 2, 12, 4, 34};
    int n(size(arr));

    int l = 0, h = n - 1;
    mergeSort(arr, l, h);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}