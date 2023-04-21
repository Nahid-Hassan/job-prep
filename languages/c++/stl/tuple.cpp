#include <iostream>
#include <tuple>
#include <iomanip> // setprecision(int)
using namespace std;

int main() {
    tuple<int, double, string> t {1,1.1, "Yes"};

    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;

    // setprecision
    cout << fixed << setprecision(2) << get<1>(t) << endl;
}