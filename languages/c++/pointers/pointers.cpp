#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 5, j = 6, k = 7;
	int *ip1 = &i, *ip2 = &j;

    cout << i << " " << j << " " << k << endl;
    cout << &i << " " << &j << " " << &k << endl;

    cout << ip1 << " " << ip2 << endl;
    cout << *ip1 << " " << *ip2 << endl;

    int *p;
    p = ip1;
    cout << p << endl;
    cout << *p << endl;

    int **ipp;
    ipp = &ip1;

    cout << ipp << " " << &ip1 << endl;
    cout << *ipp << " " << &ip1 << endl;
    cout << **ipp << " " << &ip1 << endl;

    *ipp = ip2;
    cout << ipp << " " << *ipp << " " << **ipp << " " << *ip1 << endl;

    *ipp = &k;
    k = 10;
    cout << ipp << " " << *ipp << " " << **ipp << " " << *ip1 << endl;

}