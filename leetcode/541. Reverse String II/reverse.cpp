class Solution {
public:
    string reverseStr(string s, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        int n = s.size();
        if (n < k) reverse(s.begin(), s.end());
        else {
            for (int i = 0; i < n; i = i + 2 * k) {
                int j = i + k;
                j = min(j, n);
                reverse(s.begin() + i, s.begin() + j);
            }
        }
        return s;
    }
};
