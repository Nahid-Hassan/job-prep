class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        string ans = "", word;
        stringstream ss(sentence);
        bool start = true;
        
        sort(dictionary.begin(), dictionary.end());
        
        while (ss >> word) {
            int check = 1;
            for (auto d : dictionary) {
                if (word.substr(0, d.size()) == d) {
                    if (start) {
                        ans += d;
                        start = false;
                    } else {
                        ans += " ";
                        ans += d;
                    }
                    check = 0;
                    break;
                } 
            }
            
            if (check) {
                if (start) {
                    ans += word;
                    start = false;
                } else {
                    ans += " ";
                    ans += word;   
                }
            }
        }
        
        return ans;
    }
};