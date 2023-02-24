// the method we following is enqueue is costly O(n)
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int query[] = {1, 5, 3, 0, 2, 0}; // 0 means dequeue
    stack<int> s1;
    stack<int> s2;

    for (int i = 0; i < sizeof(query) / sizeof(query[0]); i++) {
        if (query[i] == 0) {
            cout << s1.top() << endl;
            s1.pop();
        } else {
            if (s1.empty()) {
                s1.push(query[i]);
            } else {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }

                s1.push(query[i]);
                while (!s2.empty()) {
                    s1.push(s2.top());
                    s2.pop();
                }
            }
        }
    }
}