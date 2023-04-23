#include <iostream>
using namespace std;

void _rev(int arr[], int left, int right) {
    while (left < right) {
        swap(arr[left++], arr[right--]);
    }
}

int main() {
    int arr[]{1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    _rev(arr, 0, size - 1);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}