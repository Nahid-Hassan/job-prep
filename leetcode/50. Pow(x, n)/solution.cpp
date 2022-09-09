class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        int temp = abs(n);
        
        while(temp) {
            if (temp % 2) { res *= x; temp--;}
            else { x *= x; temp >>= 1;}
        }
        
        return n > 0 ? res : 1 / res;
    }
};