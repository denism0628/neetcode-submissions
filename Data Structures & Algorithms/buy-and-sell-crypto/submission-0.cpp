class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int min_buy=prices[0];
        for(int sell:prices){
            profit=max(profit,sell-min_buy);
            min_buy=min(min_buy,sell);
        }
        return profit;
    }
};
