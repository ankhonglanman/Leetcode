class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        int mid = left + ((right - left) / 2);
        if(right == 1){
            if(target == nums[left]){
                return left;
            }
            else if(target == nums[right]){
                return right;
            }
        }
        while(left <= right){
            if(nums[mid] < target){
                left = mid + 1;
            }
            else if (nums[mid] > target){
                right = mid - 1;
            }
            else{
                return mid;
            }
            mid = left + ((right - left) / 2);
        }
        return -1;
    }
};