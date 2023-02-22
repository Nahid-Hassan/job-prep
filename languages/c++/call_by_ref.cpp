#include <iostream>
using namespace std;

void function_under_param_test(
    int &,  // reference parameter
    int     // value parameter
);

// call by address - call by value
// but instead pass value, pass address
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// call by reference
void __swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int ref_as_const(const int &x) {
    // ++x;                // cause ERROR! not allowed to increment constant variable
    // return x;
    return (x + 1);
}

// return by an reference
int &function_return_by_an_ref(int &x) {
    return (x);
}

int main() {
    int a = 20;
    cout << "a = " << a << ", &a = " << &a << endl;
    function_under_param_test(a, a);

    int b = 30;
    _swap(&a, &b);
    cout << a << " " << b << endl;

    __swap(a, b);
    cout << a << " " << b << endl;

    const int &ref = function_return_by_an_ref(b);
    cout << b << ", &b = " << &b << endl;
    function_return_by_an_ref(b) = 10;
    cout << b << ", &b = " << &b << endl;

    // int i, &j = i;
    // int k;
    // &j = k; // expression must be modifiable lvalue
}

void function_under_param_test(int &b, int c) {
    cout << "b = " << b << ", &b = " << &b << endl;
    cout << "c = " << c << ", &c = " << &c << endl;
}