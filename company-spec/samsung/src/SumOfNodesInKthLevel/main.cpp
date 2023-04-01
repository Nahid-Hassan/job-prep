#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    int k;
    cin >> k;

    string s;
    cin >> s;

    int depth = -1;  // depth = -1 initially
    int sum = 0;

    /**
     * Simple iterative solution!
     * 
    */
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == '(') depth++;   
        else if (s[i] == ')') depth--;
        else {
            int temp = 0;
            if (depth == k) {
                int d = s[i] - '0';

                while (d >= 0 and d <= 9) {
                    temp = temp * 10 + d;
                    i++;
                    d = s[i] - '0';
                }
                // cause we already one index forwarded
                i--;
                sum += temp;
            }
        }
    } 
    cout << sum << endl;
}