// Last updated: 8/16/2026, 1:55:55 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int profit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<min) min = prices[i];
            if(prices[i]-min>profit) profit = prices[i]-min;
        }
        return profit;
    }
};