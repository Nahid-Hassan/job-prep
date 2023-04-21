#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int main() {
    vector<int> v(1000000);
    auto start = chrono::high_resolution_clock::now();
    v.clear();
    auto end = chrono::high_resolution_clock::now();
    cout << "Time taken by clear(): " 
         << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " microseconds" << endl;

    vector<int> v2(1000000);
    start = chrono::high_resolution_clock::now();
    vector<int>().swap(v2);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken by swap(): " 
         << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " microseconds" << endl;
    
    cout << v.size() << endl;
    cout << v2.size() << endl;

    // vector<int>().swap(v2); // clear the contents

    return 0;
}
