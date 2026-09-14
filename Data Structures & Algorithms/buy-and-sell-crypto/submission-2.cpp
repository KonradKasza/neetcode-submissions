class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int min = prices[0];
        int maxprofit = 0;

        for ( int i = 0 ; i < prices.size(); i++){
            if(prices[i] < min) min = prices[i];
            else if (prices[i] - min > maxprofit) maxprofit = prices[i]-min;    
        }   

        return maxprofit > 0 ? maxprofit : 0;
    }
};
