
class Solution {
public:
    int divisors_sum(int n) {
        int sum = 0;
        vector<int> vec;
        bool g4 = true;
        
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0 && i * i != n) {
                vec.push_back(i);
                vec.push_back(n / i);
            }
            
            if (i * i == n) vec.push_back(i);
            
            if (vec.size() > 4) {
                g4 = false;
                break;
            }
        }
        
        if (vec.size() == 4 && g4) {
            for (auto it : vec) {
                sum += it;
            }
        }
        
        return sum;
    }
    
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for (auto it : nums) { 
            total += divisors_sum(it);
        }
        return total;
    }
};