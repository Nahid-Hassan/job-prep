#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    stack<int> st;   // example: browser back button
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        int elem = st.top(); // return top element from the stack
        cout << elem << " ";
        st.pop(); // remove top element from the stack
    }

    cout << endl; // for prettier output

    queue<int> q;  // example: printer queue.
    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        int elem = q.front(); // in stack we use top() and in queue we use front()
        cout << elem << " ";
        q.pop();
    }

    return 0;
}