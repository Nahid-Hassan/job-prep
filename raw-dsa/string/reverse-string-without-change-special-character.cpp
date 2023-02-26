#include <bits/stdc++.h>
using namespace std;

string reverse_(string s) {
    stack<char> sc;

    for (char c : s) {
        if (isalpha(c)) {
            sc.push(c);
        }
    }

    string ans = "";
    for (char c : s) {
        if (isalpha(c)) {
            ans += sc.top();
            sc.pop();
            continue;
        } 
        ans += c;
    }

    return ans;
}

int main() {
    string s = "$$Ab,c,de!$AA";
    assert(reverse_(s) == "$$AA,e,dc!$bA");
    cout << "All tests are passed" << endl;
}