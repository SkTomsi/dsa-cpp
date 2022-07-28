class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], maxProfit = 0;
        for ( int i = 0 ; i < prices.size(); i++){
            int cost = prices[i] - minPrice;
            minPrice = min(minPrice, prices[i]);
            maxProfit = max( maxProfit ,cost);
        }
        return maxProfit;
    }
};