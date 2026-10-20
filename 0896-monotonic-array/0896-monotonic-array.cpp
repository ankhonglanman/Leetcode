class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1){
            return true;
        }
        int len = nums.size();
        if(nums[0] < nums[len -  1]){
            int prev = INT_MIN;
            for(int i = 0; i < len; i++){
                if(nums[i] < prev){
                    return false;
                }
                prev = nums[i];
            }
        }
        else{
            int prev = INT_MAX;
            for(int i = 0; i < len; i++){
                if(nums[i] > prev){
                    return false;
                }
                prev = nums[i];
            }
        }
        return true;
    }
};