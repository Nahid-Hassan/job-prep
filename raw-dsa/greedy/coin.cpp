# include <bits/stdc++.h>
using namespace std;

/**
 * Using greedy algorithm to find the minimum number of coins to make money.
 */


int optGreedy(int* coins, int money) {
    int n = (int) sizeof(coins); 
    vector<int> sol;

    sort(coins, coins + n); // array always sorted first.

    for (int i = n - 1; i >= 0; i--) {
        while (money >= coins[i]) {
            money -= coins[i];
            sol.push_back(coins[i]);
        }
    }

    for (auto it : sol) cout << it << " ";
    cout << endl;

    return (int) sol.size();
}

int main() {
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};

    assert(optGreedy(coins, 520) == 4);
    assert(optGreedy(coins, 500) == 3);
    assert(optGreedy(coins, 100) == 1);

    return 0;
}