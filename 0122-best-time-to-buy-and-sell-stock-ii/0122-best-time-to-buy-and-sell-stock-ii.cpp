class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold = 10001;
        int profit = 0;

        for(const auto& price : prices){

            if(price > hold){
                profit += price - hold;
                hold = price;
            }
            else{
                hold = price;
            }
        } 

        return profit;
    }
};