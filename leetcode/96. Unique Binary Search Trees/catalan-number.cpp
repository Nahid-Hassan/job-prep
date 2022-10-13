class Solution {
public:
    int catalan[20];
    void init(int n) {
        catalan[0] = catalan[1] = 1;
        for (int i = 2; i <= n; i++) {
            catalan[i] = 0;
            for (int j = 0; j < i; j++) {
                catalan[i] += catalan[j] * catalan[i-j-1];
            }
        }
    }
    int numTrees(int n) {
        init(n);
        return catalan[n];
    }
};