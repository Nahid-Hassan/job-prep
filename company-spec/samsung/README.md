# Samsung Preparation

In this documentation file, I trying to contribute my daily basis `Samsung` company advanced test interview preparation.

**Table of Contents**:

- [Samsung Preparation](#samsung-preparation)
  - [01. Aggressive Cows (SPOJ) - (2023-03-13)](#01-aggressive-cows-spoj---2023-03-13)
  - [04 . Brust Ballons - LeetCode](#04--brust-ballons---leetcode)


## 01. Aggressive Cows (SPOJ) - (2023-03-13)

- Problem Link: [Aggressive cows - SPOJ](https://www.spoj.com/problems/AGGRCOW/)
- [Sol - Youtube](https://youtu.be/SiE1XFhYoaA)

```txt
IDEA: Sort the array
```

**Accepted** - `2023-03-13`

```c++
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    int tc;
    cin >> tc;

    while (tc--) {
        int n, c;

        cin >> n >> c;

        vector<int> pos(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
        }

        sort(pos.begin(), pos.end());
        int low = pos[0];
        int high = pos[pos.size() - 1];

        int best = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int cnt = 1, left = 0;
            for (int i = 1; i < n and cnt < c; i++) {
                if (pos[i] - pos[left] >= mid) {
                    cnt++;
                    left = i;
                }
            }

            if (cnt >= c) {
                best = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
            // cout << low << " " << mid << " " << high << " " << best << endl;
        }
        cout << best << endl;
    }
    return 0;
}
```

## 04 . Brust Ballons - LeetCode

- [Problem Link](https://leetcode.com/problems/burst-balloons/)