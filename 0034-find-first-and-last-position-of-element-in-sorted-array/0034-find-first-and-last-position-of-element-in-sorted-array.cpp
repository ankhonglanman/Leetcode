class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0){
            return {-1, -1};
        }
        auto range = equal_range(nums.begin(), nums.end(), target);
        vector<int> ans = {(int)(range.first - nums.begin()), (int)(range.second - 1 - nums.begin())};
        if (range.first == range.second){
            return {-1, -1};
        }
        return ans;
    }
};