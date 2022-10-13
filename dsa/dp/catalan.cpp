// https://www.youtube.com/watch?v=0pTN0qzpt-Y

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MAX = 19;
int catalan[MAX];
int n = MAX;

void init() {
    catalan[0] = catalan[1] = 1;
    for (int i=2; i<=n; i++) {
        catalan[i] = 0;
        for (int j=0; j < i; j++) {
            catalan[i] += (catalan[j] * catalan[i-j-1]) % MOD;
            if (catalan[i] >= MOD) {
                catalan[i] -= MOD;
            }
        }
    }
}

int main() {

}