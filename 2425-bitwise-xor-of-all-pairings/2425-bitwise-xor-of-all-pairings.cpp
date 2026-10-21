class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int res = 0;
        if(len1 % 2 == 0 && len2 % 2 == 0) return 0;
        if(len1 % 2 == 0){
            for(const auto num : nums1){
                res ^= num;
            }
        }
        else if(len2 % 2 == 0){
            for(const auto& num : nums2){
                res ^= num;
            }
        }
        else{
            for(const auto num : nums1){
                res ^= num;
            }
            for(const auto& num : nums2){
                res ^= num;
            }
        }
        return res;
    }
};