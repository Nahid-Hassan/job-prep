class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string, bool> mp;
        for (auto email : emails) {
            string mail = "";
            bool flag = true;
            for (int i = 0; i < email.size(); i++) {
                if (email[i] == '.') {
                    continue;
                } else if (email[i] == '+') {
                    i++;
                    while (email[i] != '@') i++;
                    for (; i < email.size(); i++) {
                        mail += email[i];
                    }
                }
                if (email[i] == '@') {
                    for (; i < email.size(); i++) mail += email[i];
                }
                if (i < email.size())
                    mail += email[i];
            }
            // cout << mail << endl;
            mp[mail] = true;
        }
        
        return mp.size();
    }
};