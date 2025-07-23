class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int p = 0, d = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < mini){
                mini = prices[i];
            }
                d = prices[i] - mini;
            p = max(d,p);
        }
        return p;
    }
};