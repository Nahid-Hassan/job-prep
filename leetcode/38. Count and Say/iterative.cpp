class Solution {
public:
    string countAndSay(int n) {
        vector<string> temp;
        temp.push_back("0");
        temp.push_back("1");
        
        for (int i = 2; i <= n; i++) {
            string prev = temp[i-1];
            string mid = "";
            
            for (int j = 0; j < prev.size(); ) {
                int count = 0;
                char ch = prev[j];
                while (j < prev.size() and ch == prev[j]) {
                    j++;
                    count++;
                }
                mid += to_string(count) + ch;
            }
            temp.push_back(mid);
        }     
        return temp[n];
    }
};