#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    string s = "what is you name dear? my name is nahid!";

    // base: frequency count
    unordered_map<char, int> freq;
    for (char &c : s) ++freq[c];

    // solution - 1: vector and sort
    vector<pair<char, int>> sorted_freq(freq.begin(), freq.end());
    sort(sorted_freq.begin(), sorted_freq.end(), [](pair<char, int> &a, pair<char, int> &b) {
        return a.second > b.second;
    });

    // for (auto it : sorted_freq) {
    //     cout << it.first << " " << it.second << endl;
    // }

    // solution - 2: using priority_queue
    priority_queue<pair<int, char>> pq;
    for (auto it : freq) {
        if (it.first != ' ')
            pq.push({it.second, it.first});
    }

    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
}