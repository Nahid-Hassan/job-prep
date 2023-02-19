class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        
        string s = "";
        bool sign = num < 0;
        num = abs(num);
        
        while(num) {
            s += to_string(num % 7);
            num /= 7;
        }
        
        reverse(s.begin(), s.end());
        if (sign) {
            s = "-" + s;
        }
        return s;
    }
};