class Solution {
private:
    static bool cmp(int a, int b){
        if((to_string(a) + to_string(b)) > (to_string(b) + to_string(a))){
            return true;
        }
        else{
            return false;
        }
    }
public:
    string largestNumber(vector<int>& nums) {
        string ans = "";
        sort(nums.begin(), nums.end(), cmp);
        for(const auto num : nums){
            ans += to_string(num);
        }
        if(nums[0] == 0){
            return "0";
        }
        return ans;
    }
};