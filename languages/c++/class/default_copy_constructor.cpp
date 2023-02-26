#include <bits/stdc++.h>
using namespace std;

class Complex {
   public:
    double _re, _im;

    // Constructor
    Complex(double re, double im) : _re(re), _im(im) {
        cout << "Call Constructor" << endl;
    }

    // // Copy constructor
    // Complex(const Complex& c) : _re(c._re), _im(c._im) {
    //     cout << "Call copy constructor\n";
    // }


    // copy assignment
    Complex& operator=(const Complex c) {
        _re = c._re;
        _im = c._im;

        // return same object
        return *this;
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

// copy assignment  
// Complex::Complex& operator=(const Complex &) {
    // ... 
    // return *this;
// }

int main() {
    Complex c(1.2, 3.3);
    Complex c2 = c; // copy constructor
    c2.print();

    c2 = c; // assignment

    c2._im = 10;
    c.print();
    c2.print();

    cout << &c << " " << &c2 << endl;
}