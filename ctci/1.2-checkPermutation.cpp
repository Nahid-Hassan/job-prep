#include <bits/stdc++.h>
using namespace std;

/**
 * permutation means same string but in different order,
 * so if we just sort those it must be equal.
*/

// solution - 1 (sort the strings)
bool isPermutation(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

// solution - 2 (check if two string has identical characters count)
bool isPermutation2(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    
    vector<int> charset(128, 0);
    for (char c : s1) {
        charset[(int) c]++;
    }

    // for (unsigned long int i = 0; i < charset.size(); i++) {
    //     cout << charset[i] << " ";
    // } cout << endl;

    for (char c : s2) {
        charset[(int) c]--;
        if (charset[(int) c] < 0) return false;
    }

    return true;
}

int main() {
    string s1 = "nahidn";
    string s2= "dihann";

    // cout << isPermutation(s1, s2) << endl;
    cout << isPermutation2(s1, s2) << endl;
}