class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int res = nums.size();
        int len = nums.size();
        for(int window = 2; window <= len; window++){
            for(int i = 0; i < len - window + 1; i++){
                unordered_set<int> set;
                for(int j = i; j < i + window; j++){
                    if(!set.contains(nums[j])){
                        set.insert(nums[j]);
                    }
                }
                res += set.size() * set.size();
            }
        }
        return res;
    }
};