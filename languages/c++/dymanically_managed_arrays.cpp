#include <iostream>
using namespace std;

int main() {
    // in .c
    int *a = (int *)malloc(sizeof(int) * 5);
    a[0] = 1; a[1] = 2; a[2] = 3; a[3] = 4; a[4] = 5;

    free(a);

    // in .cpp
    // new int[number of element in the array]
    int *p = new int[5]; // same as previous
    p[0] = 1;
    p[1] = 2;

    delete [] (p);
}