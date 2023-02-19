class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        
        int rest = numBottles;
        while (rest) {
            total += rest / numExchange;
            rest = (rest / numExchange ) + (rest % numExchange);
            if (rest < numExchange) {
                break;
            }
        }
        
        return total;
    }
};