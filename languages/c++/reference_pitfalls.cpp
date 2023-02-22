#include <iostream>
using namespace std;

int main() {
    // int &i;  // ERROR! declared as reference but not initialized
    int j;
    int &i = j;  // OK!

    // int &c = 5;  // ERROR! cannot bind non-cast lvalue reference of type &int to an rvalue type int
    const int &c = 5; // OK
    
    int k;
    const int &d = c + k;
}