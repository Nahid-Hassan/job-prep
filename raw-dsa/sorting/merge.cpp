#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> a = {2,8,15,18};    
    vector<int> b = {5,9,12,17};    

    vector<int> c(a.size() + b.size(), 0);

    long unsigned int i = 0; 
    long unsigned int j = 0; 
    int k = 0;

    while (i < a.size() and j < b.size()) {
        if (a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    for (; i < a.size(); i++) {
        c[k++] = a[i];
    }

    for (; j < b.size(); j++) {
        c[k++] = b[j];
    }

    for (auto it : c) {
        cout << it << " ";
    } cout << endl;

    return 0;
}