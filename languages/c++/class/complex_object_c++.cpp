#include <iostream>
using namespace std;

class Complex {
   public:
    double re, im;
};

int main() {
    Complex c = {1.3, 1.5};

    cout << c.re << " " << c.im << endl;
}