class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int len = nums.size();
        int mid = (len + 1)/2;
        long long ans = 0;

        for(int i = 0; i < len; i++){
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end(), greater<int>());

        for(int i = 0; i < mid; i++){
            ans += nums[i];
        }

        for(int i = mid; i < len; i++){
            ans -= nums[i];
        }

        return ans;
    }
};