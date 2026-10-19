class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int len = 0;
        int first = 0; 

        for(const auto& num : nums){
            if(num < target){
                first++;
            }
            else if(num == target){
                len++;
            }
        }

        vector<int> res(len, 0);
        for(int i = 0; i < len; i++){
            res[i] = first++;
        }

        return res;
    }
};