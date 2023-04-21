#include <bits/stdc++.h>
using namespace std;

/*
    auto varName = [](arguments) -> retType {
        // write your code...
        return ...
    };
*/

auto myLambdaSum = [](int x, int y) -> int {
    return x + y;
}; 

int x = 10;

auto init = []() {
    cout << "Hello - " << x << endl;
};

int main() {
    int sum = myLambdaSum(10, 20);
    cout << sum << endl;
    init();
}