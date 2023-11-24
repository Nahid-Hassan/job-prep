#include <iostream>
using namespace std;

void _rev(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start++], arr[end--]);
    }
}   

int main() {
    int arr[] {4,5,2,6,3};

    int size = sizeof arr / sizeof arr[0];

    _rev(arr, 0, 3);
    _rev(arr, 4, 4);
    _rev(arr, 0, 4);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}