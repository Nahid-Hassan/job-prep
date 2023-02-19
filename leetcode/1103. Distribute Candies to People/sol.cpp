class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> sol(num_people, 0);
        
        int j = 1;
        while (candies > 0) {
            for (int i = 0; i < num_people; i++) {
                sol[i] += j <= candies ? j : candies;
                candies -= j++;
                
                if (candies <= 0) break;
            }            
        }
        
        return sol;
    }
};