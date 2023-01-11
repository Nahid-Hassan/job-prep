class Solution {
public:
    double angleClock(int h, int m) {
        double temp = ((11 * m - 60 * h) * 1.0) / 2.0;    
        
        return abs(temp) > 180.0 ? 360.0 - abs(temp) : abs(temp);
    }
};