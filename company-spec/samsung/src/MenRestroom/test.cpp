#include <bits/stdc++.h>
using namespace std;

#define len 100
int arr[len];

void solve(int rooms, int persons) {
    memset(arr, 0, sizeof(arr));

    for (int person = 1; person <= persons; person++) {
        int startZero = 0;
        int countZero = 0;
        int lastZero = 0;

        int ans = 0;
        for (int i = 0; i < rooms; i++) {
            if (arr[i] == 0) {
                countZero++;
            }
            if (arr[i] == 1) {
                countZero = 0;
            }

            if (ans <= countZero) {
                ans = countZero;
                lastZero = i;
            }
        }
        startZero = lastZero - ans + 1;
        arr[(lastZero + startZero) / 2] = 1;
    }

    for (int i = 0; i < rooms; i++) {
        cout << arr[i] << "";
    }
    cout << endl;
}

int main() {
    freopen("in.txt", "r", stdin);
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int rooms, person;
        cin >> rooms >> person;
        solve(rooms, person);
    }
}