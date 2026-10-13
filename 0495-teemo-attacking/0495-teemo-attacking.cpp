class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int prevEnd = -1;
        int ans = 0;
        for(const auto& n : timeSeries){
            ans += duration;
            if(prevEnd >= n){
                ans -= prevEnd - n + 1;
            }
            prevEnd = n + duration - 1;
        }
        return ans;
    }
};