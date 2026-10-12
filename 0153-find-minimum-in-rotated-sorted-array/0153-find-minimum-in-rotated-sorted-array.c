inline int helper(int* nums, int left, int right){

    if(left == right){
        return nums[left];
    }
    
    int mid = (left + right) / 2;

    if(mid == 0){
        return (nums[0] > nums[1]) ? nums[1] : nums[0];
    }

    if (nums[mid] < nums[mid - 1]){
        return nums[mid];
    }

    if (nums[mid] > nums[mid + 1]){
        return nums[mid + 1];
    }

    if(nums[mid + 1] > nums[right]){
        return helper(nums, mid + 1, right);
    }
    else{
        return helper(nums, left, mid - 1); 
    }

}

int findMin(int* nums, int numsSize) {

    return helper(nums, 0, numsSize - 1);

}