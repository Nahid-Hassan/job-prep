class Solution {
public:
    int minimumPartition(string s, int k) {
        int n = size(to_string(k));
        
        int count = 0;
        if (n > 1) {
            for (int i = 0; i < s.size(); ) {
               int temp = stoi(s.substr(i, n));
                if (temp <= k) {
                    count++;
                    i += n;
                } else {
                    count++;
                    i += (n - 1);             
                }
                cout << temp << endl;
            }    
        } else {
            for (int i = 0; i < s.size(); i++) {
                if (((int)s[i] - 48) <= k) {
                    count++;
                } else {
                    count = -1;
                    break;
                }
            }
        }
        
        
        return count;
    }
};