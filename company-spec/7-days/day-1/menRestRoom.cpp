#include <cstring>
#include <iostream>
using namespace std;

#define len 100
int rooms[len];
int r, p;

void solve() {
    memset(rooms, 0, sizeof(rooms));

    for (int person = 1; person <= p; person++) {
        int countZero = 0;
        int ans = 0;
        int lastZero = 0;

        for (int i = 0; i < r; i++) {
            if (rooms[i] == 0) countZero++;
            if (rooms[i] == 1) countZero = 0;
            if (ans <= countZero) {
                ans = countZero;
                lastZero = i;
            }
        }

        int startZero = lastZero - ans + 1;
        int mid = (lastZero + startZero) / 2;

        rooms[mid] = 1;
    }

    for (int i = 0; i < r; i++) {
        cout << rooms[i] << "";
    }
    cout << endl;
}

int main() {
    freopen("menIn.txt", "r", stdin);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        cin >> r >> p;
        solve();
    }
}