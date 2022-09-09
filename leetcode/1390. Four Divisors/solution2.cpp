class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        
        for (auto n : nums) {
            int nsqrt = sqrt(n);
            if (nsqrt * nsqrt == n) continue;

            int temp = n + 1; // 1 ... n 
            int count = 0;    // if count > 1, divisors are greater than 4
                              // if count == 0, divisors are less than 4
            
            for (int i = 2; i <= nsqrt; i++) {
                if (n % i == 0) {
                    count++;
                    temp += (n / i + i);
                }
                
                if (count > 1) break;
            }
            
            if (count == 1) total += temp;
        }
        return total;
    }
};