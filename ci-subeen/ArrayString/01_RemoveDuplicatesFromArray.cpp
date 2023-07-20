#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int>& vector, int limit) {
    for (int i = 0; i < limit; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int removeDuplicates(vector<int>& array) {
    int n = array.size();

    if (n == 0) return n;

    int current_index = 1;
    /**
     * Start from 2nd position and check between current_index and current_index - 1
     * if they are not same. then change array[current_index++] = array[i]
     */
    for (int i = 1; i < n; i++) {
        if (array[i - 1] != array[i]) {
            array[current_index] = array[i];
            current_index++;
        }
    }
    printVector(array, current_index);
    return current_index;
}

int main() {
    vector<int> data = {0, 0, 0, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4};
    assert(removeDuplicates(data) == 5);

    data = {0, 0, 1, 22, 23, 24, 25, 25, 26};
    assert(removeDuplicates(data) == 7);

    cout << "All tests passed." << endl;
}