#include <iostream>
#include <string>
using namespace std;

int main() {
    string s {"the name of our university is University of Rajshahi. My current gpa is 3.35+."};
    int mx_length = 15;
    int length = s.length();

    int lines = (length / mx_length) + (length % mx_length > 0);

    for (int i = 0; i < lines; i++) {
        int start = i * mx_length;
        int end = start + mx_length;

        if (end > length) end = length;

        string line = s.substr(start, end - start);
        int spaces = (mx_length - line.length()) / 2;

        cout << string(spaces, ' ') << line << string(spaces, ' ') << endl;
    }
}