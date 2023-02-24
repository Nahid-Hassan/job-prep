#include <iostream>
#include <queue>
using namespace std;

/**
 * C++ Queue STL
 * 
 * [1,2,3]
 * empty()      => false
 * size()       => 3
 * front()      => 3
 * back()       => 1
 * push         => [2,1,2,3]
 * pop()
*/

int main() {
    int query[] = {1, 5, 3, 0, 2, 0}; // 0 means dequeue

    queue<int> q1;
    queue<int> q2;

    // what stack do? LIFO
    // what queue do? FIFO

    for (int i = 0; i < sizeof(query) / sizeof(query[0]); i++) {
        if (query[i] == 0) {
            
        }
    }
}