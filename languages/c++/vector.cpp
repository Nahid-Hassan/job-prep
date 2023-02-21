#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
    // return a < b; acending 
    return a > b; 
}

int main() {
    int data[] = {35, 71, 12, 45, 26};

    sort(data, data + 5, compare);


    for (int d : data) cout << d << " "; cout << endl;


    return 0;
}