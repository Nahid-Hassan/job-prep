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

/**
 * Constructor destructor call order.
 * Create object c1, c2, c3
 * Constructor C1
 * Constructor C2
 * Constructor C3
 
 *  <------------ Reverse order -------->

 * Destructor C3
 * Destructor C2
 * Destructor C1
*/

int main() {
    Complex c(1.2, 3.3);
    c.print();

    Complex c2(c);
    c2.print();

    Complex c3 = c2;
}