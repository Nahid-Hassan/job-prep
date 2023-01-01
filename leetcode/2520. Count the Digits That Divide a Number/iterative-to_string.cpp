class Solution {
public:
    int countDigits(int num) {
        string temp = to_string(num);
        int count = 0;
        
        for (int i = 0; i < temp.size(); i++) {
            if (num % ((int) temp[i] - 48) == 0) count++;
        }
        
        return count;
    }
};