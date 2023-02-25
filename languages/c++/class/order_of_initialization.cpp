#include <iostream>
using namespace std;

int init_m1(int m) {
    cout << "Init m1_: " << m << endl;
    return m;
}

int init_m2(int m) {
    cout << "Init m2_: " << m << endl;
    return m;
}

class X {
    int m2_, m1_;  // order of 

   public:
    X(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2)) {
        cout << "Constructor" << endl;
    }

    ~X() { cout << "Destructor" << endl; }
};


class X_data_mem_Swap {
    int m1_, m2_;  // order of data member are swapped.

   public:
    X_data_mem_Swap(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2)) {
        cout << "Constructor" << endl;
    }

    ~X_data_mem_Swap() { cout << "Destructor" << endl; }
};

int main() {
    X a(2, 3);
    X_data_mem_Swap b(2,3);
 
    return 0;
}