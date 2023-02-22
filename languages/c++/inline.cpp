#include <iostream>
using namespace std;

#define SQUARE(x) x* x

// when you write function like this, it actually
// don't make any function call...!

/**
 * inline is a directive.
 * inline function cannot be recursive
*/

inline int SQUARE_INLINE(int x) { return x * x; }



int main() {
    int a = 3, b;
    b = SQUARE(a);  // a * a

    cout << "[Line number = " << __LINE__ << "] and output is = " << b << endl;

    // pitfalls
    b = SQUARE(a + 1);  // a + 1 * a + 1
    cout << "[Line number = " << __LINE__ << "] and output is = " << b << endl;

// to solve this
#ifdef SQUARE
#undef SQUARE
#define SQUARE(x) (x) * (x)
#endif

    b = SQUARE(a + 1);  // a + 1 * a + 1
    cout << "[Line number = " << __LINE__ << "] and output is = " << b << endl;

    // but again another pitfalls
    b = SQUARE(++a);  // two time ++a so, 5 * 5 -> 25
    cout << "[Line number = " << __LINE__ << "] and output is = " << b << endl;
    // and no easy to way fix this issues....

    a = 3;
    b = SQUARE_INLINE(++a);
    cout << "[Line number = " << __LINE__ << "] and output is = " << b << endl;

    return 0;
}