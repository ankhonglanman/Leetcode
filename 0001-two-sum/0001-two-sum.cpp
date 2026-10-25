class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int len = nums.size();

        for(int i = 0; i < len; i++){
            if(map.contains(nums[i])) return {map[nums[i]], i};
            map[target - nums[i]] = i;
        }

        return {-1, -1};
    }
};