class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        
        int len = nums.size();
        
        int sum = 0;
        
        for(int i = 0; i < len - 1; i += 2){
            sum += nums[i];
        }
        
        return sum;
    
    }
    
};