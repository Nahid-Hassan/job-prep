class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sol;
        if (n % 2) {
            n /= 2;
            for (int i = -n; i <= n; i++) {
                sol.push_back(i);
            }
        } else {
            n /= 2;
            for (int i = -n; i <= n; i++) {
                if (i != 0) {
                    sol.push_back(i);
                }
            }
        }
        
        return sol;
    }
};