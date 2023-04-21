#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main() {
    set<int> s;

    int x = 10;
    s.insert(x);
    s.insert(x + x);
    s.insert(x);

    for (auto &it : s) cout << it << " "; 
    cout << endl;


    set<int> s1;

    x = 10;
    s1.insert(x);
    s1.insert(x + x);
    s1.insert(move(x)); // moved instead of being copied

    for (auto &it : s1) cout << it << " "; 
    cout << endl;

}