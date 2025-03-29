class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minBuy = INT_MAX; 
        int profit = 0;      

        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum buy price
            minBuy = min(minBuy, prices[i]);

            // Update profit by selling at current price
            profit = max(profit, prices[i] - minBuy);
        }
        return profit;
    }
};