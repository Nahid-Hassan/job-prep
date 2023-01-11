class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        int i = 1;
        
        while (n > 0) {
            n -= i;
            ans++;
            i++;
        }
        
        return n < 0 ? --ans : ans;
    }
};