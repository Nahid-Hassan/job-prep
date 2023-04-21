#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "Nahid\\\nHassan\n";
    cout << s1 << endl;

    // row string
    // R"(....)"
    string s2 = R"(Nahid\\\nHassan\n)";
    cout << s2 << endl;


    // R"XyZ( ... )XyZ"
    string s3 = R"ncp(a\
b\nc()"
)ncp";

    cout << s3 << endl;
}