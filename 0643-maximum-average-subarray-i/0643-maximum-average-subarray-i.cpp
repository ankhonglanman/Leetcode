class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum = 0;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        double max = (double)sum/k;
        int len = nums.size();
        
        for(int j = k; j < len; j++){

            sum = sum - nums[j - k] + nums[j];
            double curMax = (double)sum/k;

            if(curMax > max){
                max = curMax;
            }

        }

        return max;

    }
};