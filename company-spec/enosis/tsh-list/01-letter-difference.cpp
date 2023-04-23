#include <iostream>
using namespace std;

int main() {
    char arr1[] {'a', 'b', 'c', 'd', 'e'};
    char arr2[] {'a', 'b', 'd', 'c', 'f'};
    int size = sizeof(arr1)/sizeof(arr1[0]); // assuming the arrays are of equal size

    for(int i=0; i<size; i++) {
        if(arr1[i] != arr2[i]) {
            cout << "Letter difference at position " << i << ": " << arr1[i] << " - " << arr2[i] << endl;
        }
    }

    return 0;
}
