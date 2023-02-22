#include <iostream>
using namespace std;

// #define TABLE_SIZE 100

#ifdef TABLE_SIZE
int table[TABLE_SIZE];
#endif

#ifndef TABLE_SIZE
#define TABLE_SIZE 100
// int table[TABLE_SIZE];
#endif

/**
 * #if #else #elif #endif - chain of macro
 */

#if TABLE_SIZE > 200
#undef TABLE_SIZE
#define TABLE_SIZE 200

#elif TABLE_SIZE < 50
#undef TABLE_SIZE
#define TABLE_SIZE 50

#else 
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif

int table[TABLE_SIZE];

int main() {
    // comment out code
    #if 0
    int n;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        print(a);
    }
    #endif

    cout << __LINE__ << endl;
    cout << __FILE__ << endl;

    cout << __DATE__ << endl;
    cout << __TIME__ << endl;

    cout << __cplusplus << endl;

    cout << __STDC__ << endl;
    cout << __STDC_HOSTED__ << endl;

    return 0;
}