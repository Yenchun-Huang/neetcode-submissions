class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int dp[n];
        int minprice = INT_MAX;
        for (int i = 0; i < n; i++){
            minprice = min(minprice, prices[i]);
            dp[i] = minprice;
        }
        int maxvalue = 0;
        for (int i = 0; i < n; i++){
            maxvalue = max(maxvalue, (prices[i] - dp[i]));
        }
        return maxvalue;
    }
};
