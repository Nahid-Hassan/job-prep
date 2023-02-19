class Solution {
public:
    int bulbSwitch(int n) {
        // if number of divisors are odd then light is on.
        // if a number is perfect square then it's divisors is odd numbers
        // so total number of on bulb is sqrt(n)
        return sqrt(n);
    }
};