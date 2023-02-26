#include <bits/stdc++.h>
using namespace std;

class Complex {
   public:
    double _re, _im;

    // Constructor
    Complex(double re, double im) : _re(re), _im(im) {
        cout << "Call Constructor" << endl;
    }

    // Copy constructor
    Complex(const Complex& c) : _re(c._re), _im(c._im) {
        cout << "Call copy constructor\n";
    }

    ~Complex() {
        cout << "Call destructor "; 
        print();
    }

    // ....
    // rest of the codes are here
    // ...

    void print() {
        cout << _re << " + " << _im << "j" << endl;
    }
};

void Display_call_by_value(Complex c_param) {
    cout << "Display: "; c_param.print();
}

void Display_call_by_ref(Complex &c_param) {
    cout << "Display: "; c_param.print();
}


/**
 * Call by value
 *  
 * Call Constructor
 * Call copy constructor
 * Display: 1.2 + 3.3j
 * Call destructor 1.2 + 3.3j
 * Call destructor 1.2 + 3.3j
*/

/**
 * Call by ref.
 * 
 * Call Constructor
 * Display: 1.2 + 3.3j
 * Call destructor 1.2 + 3.3j
*/


int main() {
    Complex c(1.2, 3.3);
    Display_call_by_value(c);
    Display_call_by_ref(c);
}