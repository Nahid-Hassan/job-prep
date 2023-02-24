// this points to the actual object.....!

#include <iostream>
using namespace std;

class Test {
   public:
    int x, y;

    void testThisPointer() {
        // for pointer this->x
        // for ref this.x
        cout << this->x << endl;
        cout << this << endl;
    }
};

// Behind the scene

/*
What we see,
class X {void f(int, int); ... };
X a; a.f(2, 3);

What we don't see,
// compiler explicitly include into the member function.
void X::f(X * const this, int, int);
X::f(&a, 2, 3);
*/

int main() {
    Test t = {10, 20};  // initialize x, and y data member
    cout << &t << endl;

    t.testThisPointer();
}

/**
Output:
===============================================
nahid@cseru:/media/nahid/.../c++/class$ ./a.out
0x7ffc66f4b240
0x7ffc66f4b240
===============================================
*/