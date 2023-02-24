#include <iostream>
using namespace std;

class Complex {
   public:
    double re, im;

    double norm() {
        return re * re + im * im;
    }

    void print() {
        cout << "{" << re << " + " << im << "j}  = " << norm() << endl;  
    }
};

int main() {
    Complex c = {1.3, 1.5};
    c.print();
}