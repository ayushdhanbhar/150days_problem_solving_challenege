class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxsell = 0;
    int bestbuy = prices[0];
    for(int i=0;i<n;i++){
        if(prices[i]>bestbuy){
            maxsell = max(maxsell,prices[i]-bestbuy);
        }
        bestbuy = min(prices[i],bestbuy);
    }
    return maxsell;
    }
};
