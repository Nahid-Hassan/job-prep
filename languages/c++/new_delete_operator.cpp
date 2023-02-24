#include <iostream>
using namespace std;

int main() {
    // new has a mandatory datatype (optional value) parameter
    int *f = new int();
    int *p = new int(5);             // both are okay


    cout << *f << endl;
    cout << *p << endl;

    delete f;
    delete p;
}