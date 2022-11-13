/**
 * @brief Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
*/

#include <bits/stdc++.h>
using namespace std;

/* we are assuming only 0-127 or total 128 characters. */
bool isUnique(string s) {
    /* if string size is greater than 128, then there must be duplicate characters */
    if (s.size() > 128) return false;

    vector <bool> char_set(s.size(), false);
    for (unsigned long int i = 0; i < s.size(); i++) {
        int ascii = (int) s[i];   /* get the corresponding ascii value */
        
        /* by default false every array cell, if it get true that means duplicate occurs*/
        if (char_set[ascii]) return false; 
        char_set[ascii] = true;   /* turn false to true for every new character */
    }
    // if all characters are unique.
    return true;
}

int main() {
    string s = "there are several character that repeats. so this string is not a unique string.";
    // string s = "abc";

    if (!isUnique(s)) {
        cout << "Duplicate found.\n";
    } else {
        cout << "No duplicate found.\n";
    }

    return 0;
}