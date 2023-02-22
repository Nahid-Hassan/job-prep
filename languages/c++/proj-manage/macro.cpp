#include <iostream>
using namespace std;

/**
 * #define identifier replacement
 * #define PI 3.14156
*/

#define TABLE_SIZE 100
int table1[TABLE_SIZE];

// if define it previously, then you undefine it first
// then re define 
#undef TABLE_SIZE
#define TABLE_SIZE 200 
int table2[TABLE_SIZE];


int main() {
    // g++ macro.cpp -D FLAG
    // cout << FLAG << endl;

    return 0;
}

// compile source 
// g++ macro.cpp -D FLAG
// g++ macro.cpp -U FLAG