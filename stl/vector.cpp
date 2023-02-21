#include <iostream>
#include <vector>
using namespace std;

class IntCell {
public:
    void greet() {
        cout << "Welcome" << endl;
    }
};

int main() {
    // vector<int> monthInDays (12); // size 12
    // vector<int> monthInDays {12};    // Size = 1, and value is 12.

    vector<int> monthInDays1{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
    vector<int> monthInDays2 = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  

    cout << monthInDays2.size() << endl;

    IntCell *m;
    m = new IntCell();
    m->greet();
    m = new IntCell {};
    m->greet();
    m = new IntCell;
    m->greet();

    IntCell ic;
    ic.greet();
}