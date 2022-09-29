class Solution {
public:
    int getSum(int a, int b) {
        while(b) {
            int temp = (a & (unsigned int)b) << 1;
            a ^= b;
            b = temp;
        }
        return a;
    }
};