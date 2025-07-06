class Solution {
public:
//tanvigoyal
    int maxProfit(vector<int>& prices) {
        int minimumPrice= INT_MAX;
        int max_profit=0;
        for(int i : prices)
        {
            minimumPrice=min(minimumPrice,i);
            max_profit=max(max_profit,i-minimumPrice);
        }
        return max_profit;
    }
};