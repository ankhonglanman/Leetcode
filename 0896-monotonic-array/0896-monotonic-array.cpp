class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1){
            return true;
        }
        int len = nums.size();
        if(nums[0] < nums[len -  1]){
            for(int i = 1; i < len; i++){
                if(nums[i] < nums[i - 1]){
                    return false;
                }
            }
        }
        else{
            for(int i = 1; i < len; i++){
                if(nums[i] > nums[i - 1]){
                    return false;
                }
            }
        }
        return true;
    }
};