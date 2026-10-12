class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mE = nums[0];
        int c = 1;
        for (int i = 1; i <= nums.size() - 1; i++){
            if (c == 0){
                mE = nums[i];
                c++;
            }
            else if (nums[i] == mE) c++;
            else c--; 
        }
        return mE;
    }
};