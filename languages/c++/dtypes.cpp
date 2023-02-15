#include <bits/stdc++.h>


int main() {
    bool flag = true;     //  8  bits,another false;
    char ch = 'a';        //  8  bits,everything is character
    wchar_t wch = 'b';    // 16  bits,wide character
    char16_t w16ch = 'd'; // 16  bits,16 bits unicode character
    char32_t w32ch = 'e'; // 16  bits,32 bits unicode character

    short ages = 12;      // 16  bits
    int year = 2002;      // 32  bits, depends on the system.
    long isbn = 1322343;  // 64  bits
    long long ll_isbn = 23423423; 
    float f = 32.23;
    double d = 23423.23423;
    long double ld  = 32423.32234; 

    // signed and unsigned
    unsigned int ui = 32324;
    unsigned long long int ull = 234234234234;

    return 0;
}