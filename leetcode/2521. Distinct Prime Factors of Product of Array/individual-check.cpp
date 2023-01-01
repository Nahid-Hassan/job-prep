class Solution {
public:
    void pf(set<int>&s, int num) {
        int div = 2;
        while (num > 1) {
            if (num % div == 0) {
                s.insert(div);
                num /= div;
            } else {
                div++;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;
        for (auto num : nums) pf(s, num);
        return s.size();
    }
};