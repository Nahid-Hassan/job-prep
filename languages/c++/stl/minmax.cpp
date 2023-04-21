#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> a = minmax({10,2,3,4});
    cout << a.first << " " << a.second << endl;

    pair<int,int> p;
    cout << p.first << " " << p.second << endl;
    
    pair<int,int> p1 {10, 10};
    cout << p1.first << " " << p1.second << endl;
}