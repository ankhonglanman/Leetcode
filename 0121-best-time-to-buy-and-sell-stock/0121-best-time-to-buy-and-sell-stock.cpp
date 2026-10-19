class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 10001;
        int profit = 0;
        for(const auto& price : prices){
            if(price < buy){
                buy = price;
            }
            else{
                int delta = price - buy;
                if(delta > profit){
                    profit = delta;
                }
            }
        }
        return profit;
    }
};