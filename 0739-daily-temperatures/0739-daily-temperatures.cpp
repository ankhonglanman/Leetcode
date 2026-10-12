class Solution {
private:
    struct dailyTemp{
        int temp;
        int date;
    };
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<struct dailyTemp> monoStack;
        
        int len = temperatures.size();

        vector<int> ans(len, 0);
        
        for(int i = 0; i < len; i++){
            
            while(!monoStack.empty() && monoStack.top().temp < temperatures[i]){
                ans[monoStack.top().date] = i - monoStack.top().date;
                monoStack.pop();
            }

            monoStack.push({temperatures[i], i});

        }

        return ans;

    }
};