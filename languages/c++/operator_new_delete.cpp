#include <iostream>
using namespace std;

int main() {
    // operator new() and operator delete is a function
    // new and delete is an operator
    int *p = (int *) operator new (sizeof(int));       // just act like malloc()
    *p = 5;

    cout << *p << endl;
    
    operator delete(p);
}