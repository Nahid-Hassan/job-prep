#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &array) {
    for (auto val : array) cout << val << " ";
    cout << endl;
}
 
void rotateLeft(vector<int> &elements, int d) {
    int counter = 0;
    while (counter < d) {
        int last = elements[0];

        for (int i = 0; i < elements.size() - 1; i++) {
            elements[i] = elements[i + 1];
        }
        elements[elements.size() - 1] = last;
        counter++;
    }
}

void rotateRight(vector<int>& elements, int d) {
    
}

int main() {
    // create a vector with 1 to 5 elements
    vector<int> elements = {1, 2, 3, 4, 5};
    int shift = 2;

    rotateLeft(elements, shift);
    printArray(elements);
} 