class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((sqrt(1 + 8 *(long)n) - 1)/2);
    }
};