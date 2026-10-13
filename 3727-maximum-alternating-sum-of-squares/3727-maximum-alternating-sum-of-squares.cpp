class Solution {
private:
    static bool cmp(int a, int b){
        if(abs(a) > abs(b)){
            return true;
        }
        return false;
    }
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        int len = nums.size();
        int mid = (len + 1)/2;
        long long ans = 0;
        for(int i = 0; i < mid; i++){
            ans += pow(nums[i], 2);
        }
        for(int i = mid; i < len; i++){
            ans -= pow(nums[i], 2);
        }
        return ans;
    }
};