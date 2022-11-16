#include <bits/stdc++.h>
using namespace std;

string URLify(string url, int len) {
    int spaceCount = 0;
    
    for (int i = 0; i < len; i++) {
        if (url[i] == ' ') spaceCount++;
    }

    int index = len + spaceCount * 2;
    if (len < (int) url.size()) url[len] = '\n';  // end of the string

    for (int i = len - 1; i >= 0; i--) {
        if (url[i] == ' ') {
            url [index - 1] = '0';
            url [index - 2] = '2';
            url [index - 3] = '%';

            index -= 3;
        } else {
            url[index - 1] = url[i];
            index--;
        }
    }

    return url;
}

int main() {
    string url = "Mr Jhon Smith           ";  // string with additional space / memory
    int trueLength = 13;

    cout << URLify(url, trueLength) << endl;
}