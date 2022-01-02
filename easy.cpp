#include <algorithm>

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int lowestPrice = INT_MAX;
        int profit = 0;
        
        for (auto price: prices)
        {
            profit = std::max(profit, price - lowestPrice);
            lowestPrice = std::min(price, lowestPrice);
        }

        return profit;
    }
};

