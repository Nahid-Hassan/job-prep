#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    /*
        if array is already partially sorted, 
        then we can find the insertPostion buy using binarySearch

        but still time complexity is O(n^2)
    */
    for (int i = 1; i < n; i++) {
        int key = arr[i];

        int j = i - 1;
        while (j >= 0 and arr[j] >= key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] <= arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }    
    cout << endl;
    return;
}

int main() {
    int arr[] = {12, 11, 12, 5, 9, 1, 17};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: "; 
    printArray(arr, n);

    // insertionSort(arr, n);
    selectionSort(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);
    
    return 0;
}
