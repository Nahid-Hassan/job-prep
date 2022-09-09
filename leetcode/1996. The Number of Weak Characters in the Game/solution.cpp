class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] < b[0] && a[1] < b[1];
        });
        
        for (auto it : properties) {
            cout << it[0] << " " << it[1] << endl;
        }
        
        return 0;
    }
};