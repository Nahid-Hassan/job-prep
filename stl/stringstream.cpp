#include <sstream>
#include <iostream>
using namespace std;

int main() {
    //
    stringstream ss("1,2,3,4");
    char ch;
    int a, b, c, d;

    ss >> a >> ch >> b >> ch >> c >> ch >> d;  
    cout << a << " " << b << " " << c << " " << d;


    a = 10;
    b = 20;
    c = 30;
    d = 40;
    ch = ',';

    ss << a << ch << b << ch << c << ch << d;
    cout << ss.str() << endl;

    // while (ss >> a) {
    //     cout << a << endl;
    //     ss >> ch;
    // }

    return 0; 
}