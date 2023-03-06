#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> mp;

    // type-1
    mp.insert(pair<char, int>('a', 100));
    cout << mp['a'] << endl;

    // type-2
    mp.insert(mp.begin(), pair<char, int>('b', 200));
    cout << mp.size() << endl;
    cout << mp.at('b') << endl;

    mp.insert(mp.begin(), pair<char, int>('c', 400));  // no max efficiency inserting

    map<char, int> mp1;
    // [inclusive,  exclusive}
    mp1.insert(mp.begin(), mp.find('c'));

    cout << mp1.size() << endl;
    for (auto it : mp1) cout << it.first << " " << it.second << endl;
}