#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 234, 35, 2, 2, 4, 2, 3, 243};
    cout << nums.size() << endl;

    set<int> s(nums.begin(), nums.end());
    cout << s.size() << endl;

    // for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    //     // cout << " " << &it; // address
    //     cout << *it << " ";    // dereference
    // }

    // for (auto it : s) {
    //     cout << it << " ";
    // }

    cout << s.count(2) << endl;
    cout << s.empty() << endl;

    s.insert(10);
    cout << s.count(12) << endl;
    s.emplace(12);

    cout << s.count(12) << endl;

    // s.clear();
    cout << s.empty() << endl;
    cout << s.size() << endl;

    // s.erase(iterator)
    // s.erase(s.begin()); // if you try to erase an empty set...
    // hangged...............or stuck.........
    for (auto it : s) cout << it << " ";

    auto it = s.find(12);  // return an iterator
    cout << *it << endl;

    auto lb = s.lower_bound(3);
    cout << *lb << endl;
    auto ub = s.upper_bound(10);
    cout << *ub << endl;

    s.erase(lb, ub);  // 3, 4, 10 erase
    for (auto it : s) cout << it << " ";

    set<int> test;
    test = s;

    cout << s.size() << " " << test.size() << endl;

    s = set<int>();  // s is now empty

    int my_ints[] = {12, 75, 10, 32, 20, 25};
    std::set<int> first(my_ints, my_ints + 3);       // 10,12,75
    std::set<int> second(my_ints + 3, my_ints + 6);  // 20,25,32

    std::set<int> foo, bar;
    foo.insert(10);
    bar.insert(20);
    bar.insert(30);
    foo.insert(40);

    // foo ({10,40}) vs bar ({20,30}):
    if (foo == bar) std::cout << "foo and bar are equal\n";
    if (foo != bar) std::cout << "foo and bar are not equal\n";
    if (foo < bar) std::cout << "foo is less than bar\n";
    if (foo > bar) std::cout << "foo is greater than bar\n";
    if (foo <= bar) std::cout << "foo is less than or equal to bar\n";
    if (foo >= bar) std::cout << "foo is greater than or equal to bar\n";
}