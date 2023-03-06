#include <bits/stdc++.h>
using namespace std;

int main() {
    // at(), begin(), cbegin(), cend(), clear(), count() -> 0 / 1
    map<int, int> mp;

    for (int i = 0; i <= 10; i++) {
        mp[i] = i * 10;
    }

    for (int i = 0; i <= 10; i++) {
        cout << mp.at(i) << endl;
    }

    // emtpy(), end, equal_range() 
    // erase(it), or erase(it, mp.end()) 
    // mp.find()

    cout << mp.find(7)->second << endl;
    if (mp.find(7) != mp.end()) {
        mp.erase(mp.find(7));
    }
    cout << mp.find(7)->second << endl; // 0

    
}