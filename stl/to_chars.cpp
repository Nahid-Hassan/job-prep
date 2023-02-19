#include <bits/stdc++.h>
using namespace std;

int main() {
    array<char, sizeof(int) * 4> buf = {0};
    
    // to_chars(buf.begin(), buf.end(), number, base);
    to_chars(buf.begin(), buf.end(), 100, 7);

    cout << buf.data() << endl;
    cout << buf.size() << endl;
    cout << string(buf.data()) << endl;
}
