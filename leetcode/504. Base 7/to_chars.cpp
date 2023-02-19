class Solution {
public:
    string convertToBase7(int num) {
        array<char, 20> buff = {0};
        to_chars(buff.begin(), buff.end(), num, 7);
        return string(buff.data());
    }
};