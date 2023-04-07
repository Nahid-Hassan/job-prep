#include <iostream>
#include <cstring>
using namespace std;

#define len 100
int array[len];
int rooms, person;

void printRooms() {
    for (int i = 0; i < rooms; i++) {
        cout << array[i];
    }
    cout << endl;
}

void solve(int rooms, int person) {
    memset(array, 0, sizeof array);
    for (int i = 1; i <= person; i++) {
        int count = 0; // countZero
        int ans = 0;   // store contains max zeros in seq
        int lastZero = 0; // lastZero 

        // 0 0 0 0 0 0 => 6, 5, (0 + 5) / 2 = 2
        // 0 0 1 0 0 0 => 3, 5, (3 + 5) / 2 = 4
        // 0 0 1 0 1 0 
        
        for (int i = 0; i < rooms; i++) {
            if (array[i] == 0) count++;
            if (array[i] == 1) count = 0;
            if (count >= ans) {
                ans = count;
                lastZero = i;
            }
        }
        int startZero = lastZero - ans + 1;
        int mid = (lastZero + startZero) / 2;

        array[mid] = 1;
    }
    printRooms();
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        cin >> rooms >> person;
        solve(rooms, person);
    }

    return 0;
}

