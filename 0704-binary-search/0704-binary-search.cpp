class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto range = equal_range(nums.begin(), nums.end(), target);
        if(range.first == range.second){
            return -1;
        }
        else{
            return range.first - nums.begin();
        }
    }
};