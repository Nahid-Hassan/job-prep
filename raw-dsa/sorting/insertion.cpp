#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &data, int n) {
    for (int i = 1; i < n - 1; i++) {
        int j = i - 1;
        
        int key = data[i];

        while (j >= 0 and data[j] > key) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

int main() {

}