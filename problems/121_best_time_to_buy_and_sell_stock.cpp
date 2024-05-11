class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = prices[0];
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            min_val = min(prices[i], min_val);
            max_profit = max(max_profit, prices[i] - min_val);
        }

        return max_profit;
    }
};
