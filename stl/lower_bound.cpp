#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, a;
    cin >> n;
    
    vector <int> data;
    for (int i = 0; i < n; i++) {
        cin >> a;
        data.push_back(a);
    }
    
    int q;
    cin >> q;
    
    while(q--) {
        cin >> a;
        
        auto it = lower_bound(data.begin(), data.end(), a);
        if (*it == a) {
            cout << "Yes " << it - data.begin() + 1 << endl;
        } else {
            cout << "No " << it - data.begin() + 1 << endl;
        }
    }
    
    return 0;
}
