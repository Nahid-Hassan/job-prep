#include <iostream>
using namespace std;

class Complex {
   private:
    double re_, im_;

   public:
    Complex(double re = 0.0, double im = 0.0) : re_(re), im_(im) {
        cout << "Constructor called - Initialization done." << endl;
    }

    ~Complex() {
        cout << "Destructor called - for (" << re_ << ", " << im_ << ")" << endl;
    }
 
    double norm();

    void opComplex(double x) {
        re_ += x;
        im_ += x;
    }

    void print() {
        cout << "|" << re_ << " + " << im_ << "j| = " << norm() << endl; 
    }
};

double Complex::norm() {
    return re_ * re_ + im_ * im_;
}


int main() {
    Complex c[3];

    /**
     * Constructor and destructor called in reverse manner.
     * 1 -> 2 -> 3 : Constructor calling!
     * 3 -> 2 -> 1 : Destructor calling! 
    */

    for (int i = 0; i < 3; i++) {
        c[i].opComplex(i), c[i].print();
    }
}   