class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (2 * n) / __gcd(2, n); 
    }
};