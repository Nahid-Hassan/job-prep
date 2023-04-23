#include <iostream>
#include <string>
#include <vector>
using namespace std;

string centerAligned(string &input) {
    string delimeter = "\r\n";
    size_t pos;
    string token;

    vector<string> lines;
    while ((pos = input.find(delimeter)) != string::npos) {
        token = input.substr(0, pos);
        lines.push_back(token);
        input.erase(0, token.size() + delimeter.size());
    }
    string output = "";
    for (auto line : lines) {
        int width = line.length();
        int padding = (80 - width) / 2;

        output += string(padding, ' ') + line + "\r\n";
    }
    return output;
}

int main() {
    string input = "This is a test string.\r\nThis is another test string.\r\nAnd this is a third test string.\r\n";

    cout << centerAligned(input) << endl;
} 