class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num == 0) return true;
        else {
            bool flag = false;
            while (num) {
                if (!flag and !(num % 10)) {
                    return false;
                };
                flag = true;
                num /= 10;
            }
        }
        
        return true;
    }
};