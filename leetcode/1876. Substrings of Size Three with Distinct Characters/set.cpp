class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = size(s);
        if (n < 3) return 0;

        int count = 0;
        for (int i = 0; i < n - 2; i++) {
            string ss = s.substr(i,3);

            set<int> st;
            for (auto ch : ss) {
                st.insert(ch);
            }

            count += st.size() == 3;
        }

        return count;
    }
};

// xyzzaz
// 012345
// 123456
