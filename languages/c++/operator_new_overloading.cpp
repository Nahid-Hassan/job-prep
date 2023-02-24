#include <iostream>
#include <cstdlib>
using namespace std;

void* operator new(size_t n) {
    cout << "Overloaded new: "<< endl;
    void *ptr = malloc(n);
    return ptr;
}

int main() {
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    delete p;
}