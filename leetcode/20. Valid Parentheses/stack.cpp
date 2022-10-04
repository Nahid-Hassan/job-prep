class Solution {
public:
    bool isValid(string p) {
        stack<char> s;
        
        for (char c : p) {
            if (s.empty()) {
                s.push(c);
            } else if (s.top() == '(' && c == ')' || s.top() == '{' && c == '}' || s.top() == '[' && c == ']') {
                s.pop();
            } else {
                s.push(c);
            }
        }
        
        return s.size() == 0;
    }
};