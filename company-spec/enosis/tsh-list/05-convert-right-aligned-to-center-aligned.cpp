#include <iostream>
using namespace std;

int main() {
    int limit = 5;

    for (int i = 1; i <= limit; i++) {
        cout << string(limit-i, ' ');
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }   
}
/*
    1
   1 2
  1 2 3
 1 2 3 4 
1 2 3 4 5
*/

/*
4
3
2
1
0
*/